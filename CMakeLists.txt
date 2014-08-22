cmake_minimum_required (VERSION 2.6)

include_directories ("./os")


project (Tutorial)
add_executable(Tutorial tutorial.cpp)

add_subdirectory (os)

target_link_libraries (Tutorial os.a)

MESSAGE( STATUS "CMAKE_CXX_CREATE_STATIC_LIBRARY:         " ${CMAKE_CXX_CREATE_STATIC_LIBRARY} )
MESSAGE( STATUS "CMAKE_CXX_COMPILE_OBJECT:                " ${CMAKE_CXX_COMPILE_OBJECT} )
MESSAGE( STATUS "PROJECT_SOURCE_DIR:         " ${PROJECT_SOURCE_DIR} )