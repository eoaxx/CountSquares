#include <Squares/Squares.h>

/*
+----+
|    |  = 1*1
+----+

+----+----+
|    |    |
+----+----+ + 1*1 + 2*2  ( 2x2 ways to generate n- 1)
|    |    |
+----+----+


+----+----+----+
|    |    |    |
+----+----+----+
|    |    |    |   = 1*1 + 2*2 + 3*3
+----+----+----+   = 1*1 + (2x2 ways to generate n - 1) + (3x3 ways to generate n - 2)
|    |    |    |
+----+----+----+

+----+----+----+----+
|    |    |    |    |
+----+----+----+----+
|    |    |    |    |  = 1*1 + 2*2 + 3*3 + 4*4
+----+----+----+----+
|    |    |    |    |  = 1*1 + (2x2 ways to generate n - 1) + (3x3 ways to generate n - 2) + (4x4 ways to generate n - 3)
+----+----+----+----+
|    |    |    |    |
+----+----+----+----+
*/

/* A recursive approach since it looks nice
   the real solution is iterative
*/
#if 0
int CountSquares(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return  n * n + CountSquares(n - 1);
    }
}
#endif

/* The iterative solution
*/
int CountSquares(int n)
{
    int total = 0;
    for (; n > 0; --n)
    {
        total += n*n;
    }
    return total;
}
