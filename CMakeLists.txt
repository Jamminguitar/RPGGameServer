cmake_minimum_required(VERSION 3.14)

project(
    rpg_game_server
    VERSION 0.1
    LANGUAGES CXX)

find_package(Scs REQUIRED)
add_executable ( rpg_game_server src/serverClient.cpp )

add_library (Scs dependencies/Scs/Source/Scs.cpp )