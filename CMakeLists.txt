cmake_minimum_required(VERSION 3.15)
project(googletest-exercise)

set(CMAKE_CXX_STANDARD 14)

# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
        ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
        EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
    include_directories("${gtest_SOURCE_DIR}/include")
endif()

set(PROGRAM_SOURCES)

add_executable(googletest-exercise main.cpp ${PROGRAM_SOURCES})
target_include_directories(googletest-exercise PRIVATE hdr)

set(TEST_SOURCES
        test/TestInventory.cpp
        test/TestItem.cpp
        test/TestCalculator.cpp)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(test ${PROGRAM_SOURCES} ${TEST_SOURCES})
target_link_libraries(test gtest_main gmock_main)
target_include_directories(test PRIVATE hdr)
add_test(NAME calculator_test COMMAND test)