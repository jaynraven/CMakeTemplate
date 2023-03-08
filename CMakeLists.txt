cmake_minimum_required(VERSION 3.15)

project(FileUtils)

set(SRC_DIR ${PROJECT_SOURCE_DIR}/code/src/)
set(SRC_LIST ${SRC_DIR}/FileUtils.cpp)

add_library(${PROJECT_NAME} STATIC ${SRC_LIST})

if(WIN32)
    set_target_properties(${TS_LIBRARY_TARGET_NAME} PROPERTIES MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

if(CMAKE_CL_64)
    set(ARCH x64)
else()
    set(ARCH x86)
endif()

set(INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/install/bin/${ARCH})
set(INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/install/lib/${ARCH})
set(INSTALL_include_DIR ${PROJECT_SOURCE_DIR}/install/include)

install(TARGETS ${PROJECT_NAME} 
    ARCHIVE DESTINATION ${INSTALL_LIB_DIR} 
    RUNTIME DESTINATION ${INSTALL_BIN_DIR} 
    LIBRARY DESTINATION ${INSTALL_BIN_DIR})
install(FILES ${SRC_DIR}/FileUtils.h DESTINATION ${INSTALL_include_DIR})