cmake_minimum_required(VERSION 3.5)
project(Demo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


add_subdirectory(lua)
add_subdirectory(oolua)

include_directories(oolua)
include_directories(lua)
set(SOURCE_FILES main.cpp)
add_executable(Demo ${SOURCE_FILES})

target_link_libraries(Demo ooluaLib)
target_link_libraries(Demo luaLib)
#一定要这个顺序，最后排列的是先编译
#目录结构
#oolua
#     lua/cmakelists.txt
#     oolua/cmakelists.txt
#main.cpp