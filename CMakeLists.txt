cmake_minimum_required(VERSION 4.3)
project(cpp-practice)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        domain/objects/Player.h
        config/os/WindowsConfig.h
        domain/objects/Coins.h
        domain/enums/CoinType.h
        config/utils/Constants.h
        actions/movements/MovementRecorder.h)
