cmake_minimum_required(VERSION 3.5)
project(hello)

add_executable(hello main.cpp)

set_target_properties(
	hello PROPERTIES
	CXX_STANDART 11
	CXX_STANDART_REQUIRED ON
)
