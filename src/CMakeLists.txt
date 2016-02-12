set(NAN_HEADER_DIR "/usr/local/lib/node_modules/nan")
message(STATUS "nan headers dir ${NAN_HEADER_DIR}")
include_directories(${CMAKE_JS_INC})
#包含node相关头文件
include_directories("/usr/local/n/versions/node/0.12.5/include/node")
#包含nan头文件
include_directories(${NAN_HEADER_DIR})


add_subdirectory("./hello_world")
add_subdirectory("./function_arguments")


