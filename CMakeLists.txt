cmake_minimum_required(VERSION 3.17)
project(Woker_Management)

set(CMAKE_CXX_STANDARD 20)

add_executable(Woker_Management main.cpp workerManagement.cpp workerManagement.h personnel.cpp personnel.h worker.h finance.cpp finance.h gmo.cpp gmo.h sales.cpp sales.h production.cpp production.h)