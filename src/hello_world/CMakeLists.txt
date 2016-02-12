file(GLOB SOURCE_FILES "./*.cpp")
set(TARGET "helloworld")
add_library("${TARGET}" SHARED "${SOURCE_FILES}")#添加共享库
set_target_properties("${TARGET}" PROPERTIES PERFIX "" SUFFIX ".node")
target_link_libraries(${TARGET} ${CMAKE_JS_LIB})