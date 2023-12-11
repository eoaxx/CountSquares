#pragma once
#include <Squares/Export.h>

/*  On an infinite lattice you are given an n x n square, for an
   arbitrary value of n. How many squares can you see ? For instance
   : for n = 1 we can see one square, for n = 2 we can see 5 squares,
   and so on.
*/

/*
  CountSquares(<0) =def= 0
  CountSquares(0)  =def= 0
  CountSquares(>0) as above
*/

SQUARES_DLL int CountSquares(int n);
