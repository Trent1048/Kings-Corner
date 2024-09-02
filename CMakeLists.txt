cmake_minimum_required(VERSION 3.5.0)
project(KingsCorner VERSION 0.1.0 LANGUAGES C CXX)

file(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)