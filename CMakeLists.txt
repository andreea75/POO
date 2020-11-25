cmake_minimum_required(VERSION 3.17)
project(Tema)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tema main.cpp header/date_student.h header/examen.h cpp/date_student.cpp cpp/examen.cpp)