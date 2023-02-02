cmake_minimum_required(VERSION 3.24)
project(Hangman_game)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)

add_executable(Hangman_game
        .idea/.gitignore
        .idea/vcs.xml
        .idea/workspace.xml
        main.cpp)
target_link_libraries(Hangman_game PRIVATE stdc++fs)