cmake_minimum_required(VERSION 3.20)
project(ex4)

set(CMAKE_CXX_STANDARD 14)
add_executable(ex4 main.cpp Players/Player.cpp Players/Player.h Cards/Card.cpp Cards/Card.h Players/Rouge.cpp Players/Rouge.h Players/Wizard.cpp Players/Wizard.h Players/Fighter.cpp Players/Fighter.h)
