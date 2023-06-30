#include <iostream>
#include "crow_all.h"
#include <cpr/cpr.h>
#include <json.hpp>
#include <string>
#include <sstream>
#include <vector>
#include <sw/redis++/redis++.h>


using json = nlohmann::json;

std::string url_encode(const std::string& value)
{
    std::ostringstream encoded_value;
    encoded_value.fill('O');
    encoded_value << std::hex;
    
    for (char c : value)
    {
        /* Encode non-alphanumeric character except for '-', '_', '.' and '~' */
        if (!isalnum(c) && c != '-' && c != '_' && c != '.' && c!= '~') {
            encoded_value << '%' << std::setw(2) << static_cast<int>(static_cast<unsigned char>(c));
        }
        else {
            encoded_value << c;
        }
    }
    
    return encoded_value.str();
}

std::vector<std::string> split(const std::string& s, char delimiter)
{
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream token_stream(s);
    
    while (std::getline(token_stream, token, delimiter))
    {
        tokens.push_back(token);
    }
    
    return tokens;
}

int main() {
    crow::SimpleApp app;
    
    sw::redis::Redis redis("tcp://localhost");
    
    CROW_ROUTE(app, "/weather")
    .methods("GET"_method)
    ([&redis](const crow::request& req, crow::response& res) {
        
        /* Extract the search address from the request query parameters */
        std::string addresses_param = req.url_params.get("addresses");
        
        /* Split the addressed parameter into individual addresses*/
        std::vector<std::string> addresses = split(addresses_param, ',');
        
        /* Prepare the reponse string */
        std::ostringstream response_str;
        
        if (addresses.size() != 3)
        {
            res.code = 400; // Bad Request
            res.write("Please provide exactly three city name in the URL.");
            res.end();
            return;
        }
        
        /* Process each address */
        for (const std::string& address : addresses)
        {
            std::string weather_key = "weather:" + address;
            
            if (redis.exists(weather_key))
            {
                auto temperature_optional = redis.get(weather_key);
                std::string temperature;
                
                if (temperature_optional)
                {
                    temperature = temperature_optional.value();
                }
                
                /*Process the temperature value */
                response_str << address << ": " << stoi(temperature) << "F\n";
            } else {
                /* URL-encode the address value */
                std::string encoded_address = url_encode(address);
                
                /* Make an HTTP request to WeatherAPI.com */
                std::string url = "http://api.weatherapi.com/v1/current.json?key=YOUR_API_KEY&q=" + encoded_address;
                auto response = cpr::Get(cpr::Url{url});
                
                /* Check if the request was successful */
                if (response.status_code == 200)
                {
                    /* Parse the JSON response */
                    json data = json::parse(response.text);
                    
                    /* Extract the temperature information */
                    std::string city = data["location"]["name"];
                    double temp_f = data["current"]["temp_f"];
                    
                    /* Store the temperature in Redis cache with a 20-minute expiration */
                    redis.setex(weather_key, 20 * 60, std::to_string(temp_f));
                    
                    response_str << city << ": " << ceil(temp_f) << "F\n";
                } else {
                    /* Handle the error case */
                    response_str << "Error retrieving weather data for " << address << std::endl;
                }
            }
        }
        
        /* Send the response back to the web browser */
        res.write(response_str.str());
        res.end();
    });

    app.port(8080).multithreaded().run();

    return 0;
}

