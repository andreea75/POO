cmake_minimum_required(VERSION 3.17)
project(Tema)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tema main.cpp header/date_student.h  cpp/date_student.cpp  header/partial.h cpp/partial.cpp header/colocviu.h cpp/colocviu.cpp header/materie.h cpp/materie.cpp)