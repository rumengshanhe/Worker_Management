cmake_minimum_required(VERSION 3.17)
project(Worker_Management)

set(CMAKE_CXX_STANDARD 20)

set(SRCS ./src/main.cpp ./src/workerManagement.cpp ./src/personnel.cpp 
    ./src/finance.cpp ./src/gmo.cpp ./src/sales.cpp ./src/production.cpp)

ADD_EXECUTABLE(main.exe ${SRCS})

