// TASK
// Given an array of integers, find the pair of adjacent elements
// that has the largest product and return that product.

// EXAMPLE
// For inputArray = [3, 6, -2, -5, 7, 3], the output should be
// adjacentElementsProduct(inputArray) = 21.

// 7 and 3 produce the largest product.

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
