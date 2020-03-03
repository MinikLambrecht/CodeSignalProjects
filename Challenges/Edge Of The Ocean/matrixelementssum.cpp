#include <iostream>
#include <vector>

int matrixElementsSum(std::vector<std::vector<int>> matrix)
{
    auto cost = 0;

    for (int i = 0; i < matrix[0].size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
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
