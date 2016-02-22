PROJECT(ecma)
cmake_minimum_required(VERSION 2.8.12)

## Architecture set up
IF(UNIX)
  IF(APPLE)
    SET(GUI "Cocoa")
    cmake_policy(SET CMP0042 NEW)
  ELSE(APPLE)
    SET(GUI "X11")
  ENDIF(APPLE)
ELSE(UNIX)
  IF(WIN32)
    SET(GUI "Win32")
  ELSE(WIN32)
    SET(GUI "Unknown")
  ENDIF(WIN32)
ENDIF(UNIX)
MESSAGE("-- GUI system is ${GUI}")

if(CMAKE_GENERATOR MATCHES ".*(Make|Ninja).*"
    AND NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build, options are: Debug Release" FORCE)
  message(STATUS "CMAKE_BUILD_TYPE not specified. Using ${CMAKE_BUILD_TYPE} build")
endif()

################################################################################
#### VERSION SETTING

set(ECMA_VERSION_MAJOR 1)
set(ECMA_VERSION_MINOR 0)
set(ECMA_VERSION_PATCH 0)
set(ECMA_VERSION_STRING ${ECMA_VERSION_MAJOR}.${ECMA_VERSION_MINOR}.${ECMA_VERSION_PATCH})

################################################################################
#### HEADER FILE FOR CMAKE PARAMETERS

# configure a header file to pass some of the CMake settings to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/CMakeParams.h.in"
  "${PROJECT_BINARY_DIR}/CMakeParams.h"
)
# add the binary tree to the search path for include files so that we will find
# CmakeConfig.h

include_directories("${PROJECT_BINARY_DIR}")

# ################################################################################
# #### BOOST

# # Check if the Boost package is installed
# # set(Boost_NO_BOOST_CMAKE ON)
# # set(Boost_USE_MULTITHREADED OFF)
# find_package(Boost COMPONENTS log REQUIRED)
# find_package(Threads REQUIRED)

# # Addition of a Flag to link the boost logger Dynamicaly
# ADD_DEFINITIONS(-DBOOST_LOG_DYN_LINK)

# # Include of the Boost project header files
# include_directories(${Boost_INCLUDE_DIRS})

################################################################################
#### CPLEX
  

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_extensions/)
find_package( Cplex )

# message("CPLEX_INCLUDE_DIRS = ${CPLEX_INCLUDE_DIRS}")
# message("CPLEX_LIBRARIES = ${CPLEX_LIBRARIES}")

# Add include directories
include_directories(${CPLEX_INCLUDE_DIRS})

IF(UNIX)
  IF(APPLE)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libstdc++")
    # add_compile_options(-stdlib=libstdc++)
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libstdc++") #-stdlib=libc++")
  ELSE(APPLE)
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -pthread -fPIC")
    add_compile_options(-pipe -pthread -fPIC)
  ENDIF(APPLE)
ENDIF(UNIX)

################################################################################
#### OR-TOOL

# option(USE_OR_TOOLS "Using the or-tool library" OFF)

# if (USE_OR_TOOLS)

#   set(OR_TOOLS_DIR "" CACHE STRING "Directory of or-tool")
#   add_library(libortools IMPORTED STATIC GLOBAL)
#   set_target_properties(libortools PROPERTIES
#       "IMPORTED_LOCATION" "${OR_TOOLS_DIR}/lib/libortools.dylib"
#       "INTERFACE_INCLUDE_DIRECTORIES" "${OR_TOOLS_DIR}/include"
#   )  
#   # include_directories("${binary_dir}/include")

# endif()

################################################################################
#### ADD LOGGER AND GOOGLE FLAGS

### Will be added if already installed !

# # add gflag
# add_subdirectory ("${CMAKE_CURRENT_SOURCE_DIR}/external/gflags")
# # add includes for gflags
# include_directories ("${gflags_BINARY_DIR}/include")
# # add library path for gflags
# set(CMAKE_LIBRARY_PATH "${gflags_BINARY_DIR}/lib" ${CMAKE_LIBRARY_PATH})

# We need thread support
find_package(Threads REQUIRED)

# Enable ExternalProject CMake module
include(ExternalProject)

# Download and install Google Flags
IF(UNIX)
  IF(APPLE)
    ExternalProject_Add(
      gflags
      GIT_REPOSITORY https://github.com/gflags/gflags.git
      PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gflags
      INSTALL_COMMAND "" # Disable install step
      UPDATE_COMMAND "" # Disable Update step
      PATCH_COMMAND "" # Disable Patch step
      CMAKE_ARGS "-DCMAKE_CXX_FLAGS='${CMAKE_CXX_FLAGS} -stdlib=libstdc++'"
    )
  ELSE(APPLE)
    ExternalProject_Add(
      gflags
      GIT_REPOSITORY https://github.com/gflags/gflags.git
      PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gflags
      INSTALL_COMMAND "" # Disable install step
      UPDATE_COMMAND "" # Disable Update step
      PATCH_COMMAND "" # Disable Patch step
    )
  ENDIF(APPLE)
ENDIF(UNIX)

# Create a libgflags target to be used as a dependency by test programs
add_library(libgflags IMPORTED STATIC GLOBAL)
add_dependencies(libgflags gflags)

# Set gflags properties
ExternalProject_Get_Property(gflags source_dir binary_dir)
set_target_properties(libgflags PROPERTIES
    "IMPORTED_LOCATION" "${binary_dir}/lib/libgflags.a"
#    "INTERFACE_INCLUDE_DIRECTORIES" "${source_dir}/include"
)
# I couldn't make it work with INTERFACE_INCLUDE_DIRECTORIES
include_directories("${binary_dir}/include")


################################################################################
#### ADD GOOGLE LOGGER

# # add google-glog
# add_subdirectory ("${CMAKE_CURRENT_SOURCE_DIR}/external/google-glog")
# # add includes for google-glog
# include_directories ("${google-glog_SOURCE_DIR}/src")
# # add library path for google-glog
# set(CMAKE_LIBRARY_PATH "${google-glog_BINARY_DIR}" ${CMAKE_LIBRARY_PATH})

# Download and install Google Logger
IF(UNIX)
  IF(APPLE)
    ExternalProject_Add(
      glog
      GIT_REPOSITORY https://github.com/google/glog.git
      PREFIX ${CMAKE_CURRENT_BINARY_DIR}/glog
      # Disable install step
      INSTALL_COMMAND ""
      UPDATE_COMMAND "" # Disable Update step
      PATCH_COMMAND "" # Disable Patch step
      CMAKE_ARGS "-DCMAKE_CXX_FLAGS='${CMAKE_CXX_FLAGS} -stdlib=libstdc++'"
      CMAKE_ARGS "-DHAVE_UNORDERED_MAP=false"
      CMAKE_ARGS "-Dgflags_DIR=${binary_dir}"
    )
  ELSE(APPLE)
    ExternalProject_Add(
      glog
      GIT_REPOSITORY https://github.com/google/glog.git
      PREFIX ${CMAKE_CURRENT_BINARY_DIR}/glog
      # Disable install step
      INSTALL_COMMAND ""
      UPDATE_COMMAND "" # Disable Update step
      PATCH_COMMAND "" # Disable Patch step
    )
  ENDIF(APPLE)
ENDIF(UNIX)

# Create a libglog target to be used as a dependency by test programs
add_library(libglog IMPORTED STATIC GLOBAL)
# add_dependencies(glog gflags)
add_dependencies(libglog libgflags glog)

# Set glog properties
ExternalProject_Get_Property(glog source_dir binary_dir)
set_target_properties(libglog PROPERTIES
    "IMPORTED_LOCATION" "${binary_dir}/libglog.a"
    "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
#    "INTERFACE_INCLUDE_DIRECTORIES" "${source_dir}/include"
)
# I couldn't make it work with INTERFACE_INCLUDE_DIRECTORIES
include_directories("${binary_dir}")
include_directories("${source_dir}/src")


################################################################################
#### ADD GOOGLE TEST

## Google Test from external

# add googletest
add_subdirectory ("${CMAKE_CURRENT_SOURCE_DIR}/external/googletest")
# add includes for googletest
include_directories ("${CMAKE_CURRENT_SOURCE_DIR}/external/googletest/include")
# add library path for googletest
set(CMAKE_LIBRARY_PATH "${googletest_BINARY_DIR}" ${CMAKE_LIBRARY_PATH})


## Google Test from GitHub

# # Download and install GoogleTest
# ExternalProject_Add(
#     gtest
#     GIT_REPOSITORY https://github.com/google/googletest.git
#     PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
#     # Disable install step
#     INSTALL_COMMAND ""
# )

# # Create a libgtest target to be used as a dependency by test programs
# add_library(libgtest IMPORTED STATIC GLOBAL)
# add_dependencies(libgtest gtest)

# # Set gtest properties
# ExternalProject_Get_Property(gtest source_dir binary_dir)
# set_target_properties(libgtest PROPERTIES
#     "IMPORTED_LOCATION" "${binary_dir}/googlemock/gtest/libgtest_main.a"
#     "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
# #    "INTERFACE_INCLUDE_DIRECTORIES" "${source_dir}/include"
# )
# # I couldn't make it work with INTERFACE_INCLUDE_DIRECTORIES
# include_directories("${source_dir}/googletest/include/")
# include_directories("${source_dir}/googlemock/include/")


## Google Test and Google mock from Download

# # Download and install GoogleTest
# ExternalProject_Add(
#     gtest
#     URL https://googletest.googlecode.com/files/gtest-1.7.0.zip
#     PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
#     # Disable install step
#     INSTALL_COMMAND ""
# )

# # Create a libgtest target to be used as a dependency by test programs
# add_library(libgtest IMPORTED STATIC GLOBAL)
# add_dependencies(libgtest gtest)

# # Set gtest properties
# ExternalProject_Get_Property(gtest source_dir binary_dir)
# set_target_properties(libgtest PROPERTIES
#     "IMPORTED_LOCATION" "${binary_dir}/libgtest_main.a"
#     "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
# #    "INTERFACE_INCLUDE_DIRECTORIES" "${source_dir}/include"
# )
# # I couldn't make it work with INTERFACE_INCLUDE_DIRECTORIES
# include_directories("${source_dir}/include")

# # Download and install GoogleMock
# ExternalProject_Add(
#     gmock
#     URL https://googlemock.googlecode.com/files/gmock-1.7.0.zip
#     PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gmock
#     # Disable install step
#     INSTALL_COMMAND ""
# )

# # Create a libgmock target to be used as a dependency by test programs
# add_library(libgmock IMPORTED STATIC GLOBAL)
# add_dependencies(libgmock gmock)

# # Set gmock properties
# ExternalProject_Get_Property(gmock source_dir binary_dir)
# set_target_properties(libgmock PROPERTIES
#     "IMPORTED_LOCATION" "${binary_dir}/libgmock.a"
#     "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
# #    "INTERFACE_INCLUDE_DIRECTORIES" "${source_dir}/include"
# )
# # I couldn't make it work with INTERFACE_INCLUDE_DIRECTORIES
# include_directories("${source_dir}/include")


################################################################################
#### ECMA LIBRARY

# set(CMAKE_CXX_FLAGS_DEBUG "-O0 -std=c++11 -ggdb -pipe -fPIC")
# set(CMAKE_CXX_FLAGS_RELEASE "-O3 -std=c++11 -pipe -fPIC")

# set(CMAKE_CXX_FLAGS_DEBUG "-g -std=c++11")
# set(CMAKE_CXX_FLAGS_RELEASE "-O3 -std=c++11")

# set(CMAKE_CXX_FLAGS_DEBUG "-g")
# set(CMAKE_CXX_FLAGS_RELEASE "-O3")

#### Use flags for c++11 and fix for maxOS

## OPTION FOR CPLEX
add_compile_options(-DIL_STD)

# try enable c++11
# g++ and clang++ need flags to enable c++11
include(CheckCXXCompilerFlag)
check_cxx_compiler_flag("-std=c++11" HAS_CPP11)
if (HAS_CPP11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()


# Includes directory of sources to be able to find .h and .tpp of the project,
include_directories("${PROJECT_SOURCE_DIR}/src")

# Storage in variables of sources and includes files of the project
file(GLOB ECMA_SRC_FILES 
  "src/alg/*.cpp"
  "src/bo/*.cpp"
  "src/input/*.cpp"
  "src/output/*.cpp"
  "src/utils/*.cpp")

## Possibility of writting directly the parameter file !!! TODO
# configure_file(${CMAKE_CURRENT_SOURCE_DIR}/src/utils/datadir.cpp.in
#   ${CMAKE_CURRENT_BINARY_DIR}/datadir.cpp @ONLY)

### Create the library of the project

# Set the name of the library
set (PROJECT_LIB_NAME ${PROJECT_NAME})

# Create and link the library to the sources files
add_library(${PROJECT_LIB_NAME} STATIC ${ECMA_SRC_FILES})

# Link glog to the library
target_link_libraries(${PROJECT_LIB_NAME} libgflags libglog ${CPLEX_LIBRARIES})

# Set properties (optional)
set_target_properties(${PROJECT_LIB_NAME} 
  PROPERTIES VERSION ${ECMA_VERSION_STRING}
  SOVERSION ${ECMA_VERSION_MAJOR})


################################################################################
### ECMA EXECUTABLE

add_executable(${PROJECT_NAME}_launcher src/main/main.cpp)
target_link_libraries(${PROJECT_NAME}_launcher ${PROJECT_LIB_NAME})


################################################################################
### ECMA TESTS

option(BUILD_ECMA_TESTS "Build all of ECMA tests." ON)

if (BUILD_ECMA_TESTS)
  add_executable(
    Tests 
    src/test/tests_examples.cpp)
    ## Add other test file here if you want
  target_link_libraries(Tests ${PROJECT_LIB_NAME} libgflags libglog gtest_main)
endif()

################################################################################
### DOCUMENTATION

option (GENERATE_DOCUMENTATION 
        "If you have Doxygen installed, you can generate documentation" OFF)

IF (GENERATE_DOCUMENTATION)
  FIND_PACKAGE(Doxygen QUIET)
  IF (DOXYGEN_FOUND)
    SET(DOXYGEN_INPUT "${CMAKE_SOURCE_DIR}/Doxyfile")
    SET(DOXYGEN_OUTPUT "docs")

    ADD_CUSTOM_COMMAND(
        OUTPUT ${DOXYGEN_OUTPUT}
          COMMAND ${CMAKE_COMMAND} -E echo_append "Building API Documentation..."
          COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_INPUT}
          COMMAND ${CMAKE_COMMAND} -E echo "Done."
          WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
          DEPENDS ${DOXYGEN_INPUT}
    )

    ADD_CUSTOM_TARGET(apidoc ALL DEPENDS ${DOXYGEN_OUTPUT})

    ADD_CUSTOM_TARGET(apidoc_forced
    COMMAND ${CMAKE_COMMAND} -E echo_append "Building API Documentation..."
    COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_INPUT}
    COMMAND ${CMAKE_COMMAND} -E echo "Done."
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

  ENDIF (DOXYGEN_FOUND)
ENDIF (GENERATE_DOCUMENTATION)



