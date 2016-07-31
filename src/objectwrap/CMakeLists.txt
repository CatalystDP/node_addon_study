message(STATUS "project source dir ${PROJECT_SOURCE_DIR}")
file(GLOB SOURCE_FILES "*.cpp")
message(STATUS "list source files ${SOURCE_FILES}")
set(TARGET "objectwrap")
#string(REPLACE ";" "" "SOURCE_FILES" ${SOURCE_FILES})
add_library("${TARGET}" SHARED ${SOURCE_FILES})#添加共享库
set_target_properties("${TARGET}" PROPERTIES PERFIX "" SUFFIX ".node")
target_link_libraries(${TARGET} ${CMAKE_JS_LIB} ${NODE_LIB})