#include <iostream>

int RUN_ALL_TESTS();

int main(int argc, const char* argv[])
{
    const int status = RUN_ALL_TESTS();
    if (status == 0)
    {
        std::cout << " All tests succeeded\n";
    }
    else
    {
        std::cout << " There where failed tests\n";
    }
    return status;
}
