cmake_minimum_required(VERSION 3.20.0)
project(data_structure)

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/demo)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)


aux_source_directory(${CMAKE_SOURCE_DIR}/src/list SRC_LIST)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/base SRC_LIST)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/stack SRC_LIST)
aux_source_directory(${CMAKE_SOURCE_DIR}/src/queue SRC_LIST)

add_library(data_structure SHARED ${SRC_LIST})
add_library(data_structure_static STATIC ${SRC_LIST})

# target_include_directories(data_structure PUBLIC ${CMAKE_SOURCE_DIR}/include)

aux_source_directory(${CMAKE_SOURCE_DIR}/demo SRC_LIST)
aux_source_directory(${CMAKE_SOURCE_DIR} SRC_LIST)

add_executable(demo ${SRC_LIST})
