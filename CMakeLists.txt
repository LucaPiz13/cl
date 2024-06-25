cmake_minimum_required(VERSION 3.10)


add_executable(matrix 
		src/main.cpp
        src/matrici.cpp
        include/matrici.hpp
)

target_include_directories(matrix PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
