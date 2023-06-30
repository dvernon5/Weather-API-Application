# WeatherAPI Application  

This repository contains a WeatherAPI application that retrieves and displays weather information for multiple cities using the WeatherAPI service. The application is written in C++ and makes use of various libraries for web API calls, JSON parsing, and Redis caching.

## Table of Contents  
- [Introduction](#introduction)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation and Configuration](#installtionandconfiguration)
- [Usage](#usage)
- [Contributing](#contributing)

## Introduction  
The WeatherAPI Application is a C++ program that allows you to retrieve weather information for multiple cities using the WeatherAPI service. The program leverages various libraries to handle web API calls. JSON parsing, and Redis caching, making it efficient and reliable.  

## Features  
* Retrieve weather information for up to three cities in a single API call.
* Utilize Redis caching to store and retrieve weather data for faster access.
* Handle web API calls and JSON parsing to fetch real-time weather information.
* Supports easy scalability and customization for future enhancements.

## Prerequisites  
Before running the WeatherAPI Application, ensure that you have the following prerequisites installed:

* C++ Compiler: Ensure that you have a C++ compiler installed on your system. For example, you can use the GNU Compiler Collection (GCC) or Xcode Command Line Tools.
* Homebrew: Homebrew is a package manager for macOS and Linux. Install Homberew by running the following command in your terminal:

```shell
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```
* Redis: Redis is an in-memory data store used for caching. Install Redis using Homebrew by running the following command:
```shell
brew install redis
```

* Nlohmann JSON Library: The Nlohmann JSON library is used for JSON parsing in the WeatherAPI Application. Install it using Homebrew with the following command:
```shell
brew install nlohmann-json
```

* Crow Framework Library: The Crow Framework library is used for handling web routing and requests in the WeatherAPI Application. Install it using Homebrew with the following command:
```shell
git clone https://github.com/CrowCpp/Crow.git).
```

* CPR Library: The CPR library is used for making HTTP requests in the WeatherAPI Application. Install it using Homebrew with the following command:
```shell
brew install cpr
```

* Redis++ Library: The Redis++ library is used for interacting with Redis in the WeatherAPI Application. Install it using Homebrew with the following command:
```shell
brew install sw-redis
```

* Xcode (for macOS users): If you're using Xcode as your IDE, make sure it is installed on your system. Xcode provides a convenient development environment for C++ programming.

## Installation and Configuration  
Follow the steps below to configure the required libraries for the WeatherAPI Application:  

### Crow Framework Library  
1. If you haven't downloaded the Crow FrameWork library please check out the Crow Documentation to install and configure your project. [Crow Installation and Configuration](https://crowcpp.org/master/getting_started/setup/macos/)

### Nlohmann JSON Library
1. If you haven't installed Nlohmann JSON library please type in the following command in your terminal:
```shell
brew install nlohmann-json
```
2. Open your Xcode project.
3. Select your project in the project navigator on the left (Blue Tag).
4. Select your target project from the target list
5. Go to the "Build Settings" tab.
6. In the search bar, type "header search paths".
7. Double-click the "Header Search Paths" build setting (Empty field on the right).
8. Click the "+" button to add a new search path.
9. Enter the path to the Nlohmann JSON header files. This will typically be the directory where the Nlohmann JSON library is installed. For example, if the library is installed in "/usr/local/include/nlohmann", you would enter "/usr/local/include" as the search path.
10. If you enter the latter "/usr/local/include" set the search path to recursive.
11. Close the build settings.

### CPR Library
1. If you haven't installed CPR library please type in the following command in your terminal:
```shell
brew install cpr
```
2. Open your Xcode project.
3. Select your project in the project navigator on the left (Blue Tag).
4. Select your target project from the target list
5. Select your target project from the target list
6. Expand the "Link Binary With Libraries" section.
7. Click the "+" button to add a new library.
8. Click the "Add Other..." button.
9. Navigate to the location where you extracted the CPR library files. Path example would look like this -> /usr/local/lib
10. Select the libcpr.a file and click the "Open" button (If that does not work drag the file into the intended area).
11. Make sure the libcpr.a file is added to the "Link Binary With Libraries" section.
12. Go to the "Build Settings" tab.
13. In the search bar, type "header search paths".
14. Double-click the "Header Search Paths" build setting (Empty field on the right).
15. Click the "+" button to add a new search path.
16. Enter the path to the CPR header files. This will typically be the directory where the CPR library is installed. For example, if the library is installed in "/usr/local/include/cpr", you would enter "/usr/local/include" as the search path.
17. If you enter the latter "/usr/local/include" set the search path to recursive.
18. Close the build settings.

### Redis++ Library
1. **Before installing Redis++ please download Redis by typing the following command in the terminal**:
  ```shell
    brew install redis
  ```
2. Please refer to the Redis++ Github page for installation [Redis-Plus-Plus Installation](https://github.com/sewenew/redis-plus-plus)
3. Once step 2 is completed open your Xcode project.
4. Select your project in the project navigator on the left (Blue Tag).
5. Select your target project from the target list
6. Expand the "Link Binary With Libraries" section.
7. Click the "+" button to add a new library.
8. Click the "Add Other..." button.
9. Navigate to the location where you extracted the CPR library files. Path example would look like this -> /usr/local/lib
10. Select the libredis++.a file and click the "Open" button (If that does not work drag the file into the intended area).
11. Make sure the libredis++.a file is added to the "Link Binary With Libraries" section.
12. Go to the "Build Settings" tab.
13. In the search bar, type "header search paths".
14. Double-click the "Header Search Paths" build setting (Empty field on the right).
15. Click the "+" button to add a new search path.
16. Enter the path to the Redis++ header files. This will typically be the directory where the Redis++ library is installed. For example, if the library is installed in "/usr/local/include/sw", you would enter "/usr/local/include" as the search path.
17. If you enter the latter "/usr/local/include" set the search path to recursive.
18. In the search bar, type "library search paths".
19. Double-click the "Library Search Paths" build setting (Empty field on the right).
20. Click the "+" button to add a new search path.
21. Enter the path to the Redis++ Library file. In the build setting (Empty field on the right) type -> /usr/local/lib
22. Close the build settings.

## Usage
To use the WeatherAPI Application, follow these steps:

1. Obtain an API key from WeatherAPI by signing up on their website: [WeatherAPI](https://www.weatherapi.com/)
2. Clone this repository to your local machine using the following command:
```shell
git clone https://github.com/your-username/WeatherAPI-Application.git
```
3. Open the project in Xcode or your preferred C++ IDE.
4. Update the YOUR_API_KEY placeholder in the code with your actual WeatherAPI API key.
5. Turn on your Redis Server. Here is a document to turn on Redis Server:[Redis Server](https://redis.io/docs/getting-started/installation/install-redis-on-mac-os/)
6. Build and run the project in your IDE.
7. Access the WeatherAPI Application by opening your web browser and navigating to http://localhost:8080/weather?addresses=city1,city2,city3, replacing city1, city2, and city3 with the names of the cities for which you want to retrieve weather information. Note that you can only fetch weather information for a maximum of three cities in a single API call.
8. The application will display the weather information for the provided cities.

## Contributing
Contributions to this repository are welcome. If you have any improvements, suggestions, or bug fixes, feel free to open a pull request. 

## Additional Resources

For detailed information on using the libraries in the WeatherAPI Application, refer to the following documentation and GitHub repository:

Crow Framework:
* [Crow GitHub Repository](https://github.com/ipkn/crow): Official GitHub repository for Crow.
* [Crow Framework Documentation](https://crowcpp.org/master/): Documentation for Crow Framework. Learn how to use the Crow Framework and explore its features.

Nlohmann JSON Library:
* [Nlohmann JSON GitHub Repository](https://github.com/nlohmann/json): Official GitHub repository for Nlohmann JSON Library.
* [Nlohmann JSON Documentation](https://json.nlohmann.me/): Comprehensive documentation for Nlohmann JSON Library. Learn how to work with JSON data using this library.

CPR Library:
* [CPR GitHub Repository](https://github.com/libcpr/cpr): Official GitHub repository for CPR Library.
* [CPR Documentation](https://docs.libcpr.org/): Official GitHub repository for CPR Library.

Redis/Redis++ Library
* [Redis GitHub Repository](https://github.com/sewenew/redis-plus-plus):
* [Redis Documentation](https://redis.io/):

For more information on the WeatherAPI and its documentation, visit [WeatherAPI Documentation](https://www.weatherapi.com/docs/). You can find detailed information on how to use the WeatherAPI service and explore its various endpoints.

For detailed information on using Xcode for C++ development, refer to the official Xcode documentation: [Xcode Documentation](https://developer.apple.com/documentation/xcode).

For more information on using Homebrew as a package manager, visit the Homebrew website: [Homebrew](https://brew.sh/).

Enjoy using the WeatherAPI Application and stay updated with the latest weather information!
