#include <iostream>
#include <vector>

int adjacentElementsProduct(std::vector<int> inputArray)
{
    const int length = inputArray.size() - 2;

    std::vector<int> results;
    auto num = 0;

    for (auto i : inputArray)
    {
        results.push_back(inputArray[num] * (inputArray[num + 1]));

        if (length > num)
        {
            num++;
        }
    }

    const auto resultsLength = results.size();
    int max = results[0];

    for (int i = 0; i < resultsLength; i++)
    {
        if (results[i] > max)
        {
            max = results[i];
        }
    }

    return max;
}

void AdjacentElementsProductResult(int test, int res)
{
    std::cout << "Adjacent Elements Product Test #" + std::to_string(test)
              << std::endl
              << "Output: " + std::to_string(res)
              << std::endl
              << std::endl;
}
