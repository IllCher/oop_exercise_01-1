cmake_minimum_required(VERSION 2.8)

project(lab1)  #Название проекта

set(SOURCE_EXE main.cpp)

set(SOURCE_LIB Position.cpp)

add_library(Position STATIC ${SOURCE_LIB})  #Создание статической библиотеки

add_executable(main ${SOURCE_EXE})  #Создает исполняемый файл с именем main

target_link_libraries(main Position)  # Линковка программы с библиотекой
