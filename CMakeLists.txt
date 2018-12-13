cmake_minimum_required(VERSION 3.12)
project(Final)

set(CMAKE_CXX_STANDARD 17)

add_executable(Final main.cpp Employees/Employee.cpp Employees/Employee.h Employees/Delivery.cpp Employees/Delivery.h Employees/Seller.cpp Employees/Seller.h)