IF (WIN32)
    set(NAN_HEADER_DIR "${NAN_PATH}\\nan")
else ()
    set(NAN_HEADER_DIR "/usr/local/lib/node_modules/nan")
endif ()
message(STATUS "nan headers dir ${NAN_HEADER_DIR}")
include_directories(${CMAKE_JS_INC})
#包含node相关头文件
IF(WIN32)
    #包含v8相关头文件
    include_directories("${NODE_HEADERS}\\v8\\include")
    #libuv头文件
    include_directories("${NODE_HEADERS}\\uv\\include")
    #包含node头文件
    include_directories(${NODE_SOURCE_CODE_PATH}\\src)
ELSE()
    include_directories("/usr/local/n/versions/node/0.12.5/include/node")
ENDIF()

#包含nan头文件
include_directories(${NAN_HEADER_DIR})


#add_subdirectory("./hello_world")
#add_subdirectory("./function_arguments")
add_subdirectory(./objectwrap)

