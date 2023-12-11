#include <Squares/Squares.h>
#include <iostream>

/*
* A Global variable, set on test failure
*/
static int g_error = 0;

#define ASSERT_EQ(have, want) \
 if ((have) != (want)) { \
    std::cout << #have << " Expected " << (want) << " Got " << (have) << "\n"; \
    g_error = 1; \
 }

int RUN_ALL_TESTS()
{
    ASSERT_EQ(CountSquares(-1), 0);
    ASSERT_EQ(CountSquares(0), 0);
    ASSERT_EQ(CountSquares(1), 1);
    ASSERT_EQ(CountSquares(2), 5);
    ASSERT_EQ(CountSquares(3), 14);
    ASSERT_EQ(CountSquares(4), 30);

    return g_error;
}
