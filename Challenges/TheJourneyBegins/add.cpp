#include <iostream>

int add(int param1, int param2)
{
    // Return the result of param1 and param 2 added up.
    return param1 + param2;
}

void AddResult(int test, int res)
{
    std::cout << "Add Test #" + std::to_string(test)
              << std::endl
              << "Output: " + std::to_string(res)
              << std::endl
              << std::endl;
}
