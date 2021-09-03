cmake_minimum_required (VERSION 2.8.11)

project (Sdk)
message(STATUS "Sdk platform: " ${SDK_PLATFORM})

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)

if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

if(${SDK_PLATFORM} STREQUAL "x86")
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m32")
	SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")
	SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -m32" )
endif()

if (${CMAKE_BUILD_TYPE} MATCHES "Release")
	message(STATUS "Release build")
	if(CMAKE_COMPILER_IS_GNUCXX)
	    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2")        ## Optimize
	    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -s")  ## Strip binary
	endif()
endif()

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}-${SDK_PLATFORM})
set (SYSROOT ${CMAKE_CURRENT_SOURCE_DIR}/Ubie/sysroot-${SDK_PLATFORM})
set (SDKINCLUDE ${CMAKE_CURRENT_SOURCE_DIR}/Ubie/include)
set (SDKLIB ${CMAKE_CURRENT_SOURCE_DIR}/Ubie/lib/${SDK_PLATFORM})
message(STATUS "Sysroot: " ${SYSROOT})

add_subdirectory (./Ubie/libraries/json)
add_subdirectory (./AppLib)
add_subdirectory (./AppTest)
add_subdirectory (./App)
