SET(LIB_NAME SquaresLib)

add_library(
    ${LIB_NAME}
  SHARED
    ./Squares.cpp)

set_property(TARGET ${LIB_NAME} PROPERTY CXX_STANDARD 20)

target_include_directories(
  ${LIB_NAME}
  PRIVATE
INTERFACE PUBLIC
  ./include
  ../include)

target_link_libraries(
  ${LIB_NAME})

INSTALL(TARGETS ${LIB_NAME})
