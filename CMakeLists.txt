cmake_minimum_required(VERSION 3.27)
project(Client_App_Management)

set(CMAKE_CXX_STANDARD 23)

add_executable(
        Client_App_Management main.cpp
        sources/Console.cpp
        headers/Console.h
        sources/Person.cpp
        headers/Person.h
        sources/Client.cpp
        headers/Client.h
        sources/App.cpp
        headers/App.h
        sources/Date.cpp
        headers/Date.h

)
