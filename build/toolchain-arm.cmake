
set( SDK_PLATFORM "arm")

# this one is important
SET(CMAKE_SYSTEM_NAME Linux)
#this one not so much
SET(CMAKE_SYSTEM_VERSION 1)

SET(CMAKE_SYSTEM_NAME Linux)
SET(CMAKE_C_COMPILER ${CMAKE_CURRENT_SOURCE_DIR}/toolchain/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/arm-linux-gnueabihf-gcc)
SET(CMAKE_CXX_COMPILER ${CMAKE_CURRENT_SOURCE_DIR}/toolchain/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/arm-linux-gnueabihf-g++)
SET(CMAKE_ASM_COMPILER ${CMAKE_CURRENT_SOURCE_DIR}/toolchain/gcc-linaro-arm-linux-gnueabihf-4.9-2014.09_linux/bin/arm-linux-gnueabihf-gcc)
SET(CMAKE_SYSTEM_PROCESSOR arm)

# where is the target environment 
SET(CMAKE_FIND_ROOT_PATH  ${CMAKE_CURRENT_SOURCE_DIR}/Ubie/sysroot-arm)

# search for programs in the build host directories
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM BOTH)
# for libraries and headers in the target directories
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
#this fixes the problem with boost (find_package(boost)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE BOTH)
