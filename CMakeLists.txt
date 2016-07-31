cmake_minimum_required(VERSION 2.8)
project(node_addon_study)
if (WIN32)
    set(NODE_SOURCE_CODE_PATH "G:\\node-source\\node-v4.4.7")
    set(NODE_HEADERS "${NODE_SOURCE_CODE_PATH}\\deps")
    set (NODE_LIB "${NODE_SOURCE_CODE_PATH}\\Debug\\node.lib")
    set(NAN_PATH "G:\\nodejs\\node_modules")
else()
    set(NODE_LIB "")
endif ()


#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory("./src" "bin")