cmake_minimum_required(VERSION 3.14)


project(
    rpg_game_server
    VERSION 0.1
    LANGUAGES CXX)

set(sources ${sources} 
    src/ServerClient.cpp
    src/ServerClient.h
    ../dependencies/Scs/Source/Scs.cpp
    ../dependencies/Scs/Source/Scs.h
    ../dependencies/Scs/Source/ScsAddress.cpp
    ../dependencies/Scs/Source/ScsAddress.h
    ../dependencies/Scs/Source/ScsClient.cpp
    ../dependencies/Scs/Source/ScsClient.h
    ../dependencies/Scs/Source/ScsCommon.cpp
    ../dependencies/Scs/Source/ScsCommon.h
    ../dependencies/Scs/Source/ScsInternal.h
    ../dependencies/Scs/Source/ScsReceiveQueue.cpp
    ../dependencies/Scs/Source/ScsReceiveQueue.h
    ../dependencies/Scs/Source/ScsSendQueue.cpp
    ../dependencies/Scs/Source/ScsSendQueue.h
    ../dependencies/Scs/Source/ScsServer.cpp
    ../dependencies/Scs/Source/ScsServer.h
    ../dependencies/Scs/Source/ScsSocket.cpp
    ../dependencies/Scs/Source/ScsSocket.h
)

add_executable(rpg_game_server ${sources})