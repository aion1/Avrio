cmake_minimum_required (VERSION 2.6)
project (ArielCoin)
set (ARIELCOIN_VERSION_MAJOR_MAJOR 0)
set (ARIELCOIN_VERSION_MAJOR 0)
set (ARIELCOIN_VERSION_MINOR 0)
set (ARIELCOIN_VERSION_MINOR_MINOR 1)  
configure_file (
  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/TutorialConfig.h"
  )
 

include_directories("${PROJECT_BINARY_DIR}")
file(GLOB_RECURSE Wallet wallet/*)
file(GLOB_RECURSE Daemon daemon/*)
file(GLOB_RECURSE Core core/*)
file(GLOB_RECURSE Database database/*)
file(GLOB_RECURSE P2p p2p)
file(GLOB_RECURSE Protocol protocol/*)
add_subdirectory(daemon)
add_subdirectory(chains)
add_subdirectory(logger)
# finaly
add_executable(Daemon daemon/main.cpp)
add_executable(Wallet wallet/main.cpp)
add_executable(MakeTable MakeTable.cxx)
