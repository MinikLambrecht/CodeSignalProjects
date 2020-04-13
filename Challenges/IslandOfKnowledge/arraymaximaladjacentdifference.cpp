// TASK
// Given an array of integers, find the maximal absolute difference
// between any two of its adjacent elements.

// EXAMPLE
// For inputArray = [2, 4, 1, 0], the output should be
// arrayMaximalAdjacentDifference(inputArray) = 3.

#include <algorithm>
#include <iostream>
#include <vector>

int arrayMaximalAdjacentDifference(std::vector<int> inputArray)
{
        // Initialize an integer to store the final result in.
        int res = 0;

        // Iterate through the array.
        for (size_t i = 1; i < inputArray.size(); i++)
        {
                // Find the max value between the 'res' value and
                // the absolute value of the current array element
                // minus the element before the current.
                res = std::max(res, abs(inputArray[i] - inputArray[i - 1]));
        }

        return res;
}
