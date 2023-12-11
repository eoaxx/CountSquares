#
# Normally I would use gtest
# but I don't have the required nuget build support so I fake it
#

SET(EXE_NAME SquaresTst)

add_executable(
    ${EXE_NAME}
    ./test_main.cpp
    ./test_squares.cpp)

set_property(TARGET ${EXE_NAME} PROPERTY CXX_STANDARD 20)

target_include_directories(
  ${EXE_NAME}
INTERFACE PUBLIC
  ./include)

target_link_libraries(
  ${EXE_NAME}
  SquaresLib)

INSTALL(TARGETS ${EXE_NAME})
