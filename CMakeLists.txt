CMake_minimum_required (VERSION 2.6)

project(KolkoIKrzyzyk)

#add_executable(KolkoIKrzyzyk main.cpp MyGame.cpp MyGame.h)
add_definitions(-std=c++11)
include_directories(${PROJECT_BINARY_DIR})

# Enable debug symbols by default
# must be done before project() statement
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

# Define sources and executable
set(EXECUTABLE_NAME "Kolko_I_Krzyzyk")
add_executable(${EXECUTABLE_NAME} main.cpp MyGame.cpp)

# Detect and add SFML
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
#set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML REQUIRED graphics window system)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif()

#FONT
file(COPY ${PROJECT_SOURCE_DIR}/Xeron.ttf DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

#GTEST UNIT TESTING
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(runTest main_test.cpp MyGame.cpp)
target_link_libraries(runTest gtest gtest_main pthread ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
add_test(runTest runTest)

# Install target
install(TARGETS ${EXECUTABLE_NAME} DESTINATION bin)


