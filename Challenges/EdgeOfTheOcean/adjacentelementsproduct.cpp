#include <iostream>
#include <vector>

int adjacentElementsProduct(std::vector<int> inputArray)
{
    // Initialize a constant long, and store the arrays element count.
    const size_t length = inputArray.size() - 2;

    // Initialize a second array for the end results.
    std::vector<int> results;

    // Initialize a long, and use it as an array position variable.
    size_t num = 0;

    // Iterate through the array and add inputArray[num]*inputArray[num+1] to the results.
    for (auto i : inputArray)
    {
        results.push_back(inputArray[num] * (inputArray[num + 1]));

        if (length > num)
        {
            num++;
        }
    }

    // Initialize a new long and store the result array element count.
    const auto resultsLength = results.size();

    // Initialize an integer and store the final result.
    int max = results[0];

    // Iterate through the results array and update it in the loop.
    for (size_t i = 0; i < resultsLength; i++)
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
