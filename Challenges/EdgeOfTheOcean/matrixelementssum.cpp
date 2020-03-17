#include <iostream>
#include <vector>

int matrixElementsSum(std::vector<std::vector<int>> matrix)
{
    // Initialize a new integer to store the total cost in.
    auto cost = 0;

    // Iterate through the matrix, and add up the price.
    // If the price above or below is 0, ignore the number.
    for (size_t i = 0; i < matrix[0].size(); i++)
    {
        for (size_t j = 0; j < matrix.size(); j++)
        {
            if(matrix[j][i] == 0)
            {
                break;
            }
            else
            {
                cost += matrix[j][i];
            }
        }
    }

    return cost;
}

void MatrixElementsSumResult(int test, int res)
{
    std::cout << "Matrix Elements Sum Test #" + std::to_string(test)
              << std::endl
              << "Output: " + std::to_string(res)
              << std::endl
              << std::endl;
}
