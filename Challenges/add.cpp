#include <iostream>

int p1, p2;

int add(int param1, int param2)
{
    p1 = param1;
    p2 = param2;

    return param1 + param2;
}

void AddResult(int test, int res)
{
    std::cout << "Add Test #" + std::to_string(test)
              << std::endl
              << std::to_string(p1) + " + " + std::to_string(p2) + " = " + std::to_string(res)
              << std::endl
              << std::endl;
}
