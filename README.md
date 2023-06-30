# WeatherAPI Application  

This repository contains a WeatherAPI application that retrieves and display weather information for multiple cities using the WeatherAPI service. The application is written in C++ and makes use of various libraries for web API calls, JSON parsing, and Redis caching.

## Table of Contents  
- [Introduction](#introduction)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation and Configuration](#installtion-and-configuration)
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


