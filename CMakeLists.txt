cmake_minimum_required(VERSION 3.17)
project(Restaurant)

set(CMAKE_CXX_STANDARD 14)

add_executable(Restaurant main.cpp Dish.cpp Dish.h Employee.cpp Employee.h Waiter.cpp Waiter.h Cook.cpp Cook.h RestaurantAdmin.cpp RestaurantAdmin.h io.cpp io.h)
configure_file(dishes2.txt dishes2.txt COPYONLY)
configure_file(dishes.txt dishes.txt COPYONLY)