#include <iostream>

// Calculate and return the shape area, using the formula below.
int shapeArea(int n)
{
    return n * n + (n - 1) * (n - 1);
}

void ShapeAreaResult(int test, int res)
{
    std::cout << "Shape Area Test #" + std::to_string(test)
              << std::endl
              << "Output: " + std::to_string(res)
              << std::endl
              << std::endl;
}
