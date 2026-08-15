cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Booking)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.h")

add_executable(booking ${SOURCES} ${HEADERS})

# Include directories
include_directories(include)
