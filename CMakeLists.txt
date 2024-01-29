cmake_minimum_required(VERSION 3.16.3)

set (CMAKE_CXX_STANDARD 20)

project(carsForHire)

add_executable (carsForHire 
main.cpp 
classes/Booking.h  
classes/Car.h 
classes/Car.cpp 
classes/Customer.h 
classes/Date.h 
classes/Fleet.h 
classes/Fleet.cpp 
)