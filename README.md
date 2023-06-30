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
git clone https://github.com/ipkn/crow.git
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
1. If you haven't please download the Crow Framework library from the official GitHub repository:[Crow Framework](https://github.com/)
