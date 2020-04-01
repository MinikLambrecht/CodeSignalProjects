// TASK
// You are given an array of integers. On each move you are
// allowed to increase exactly one of its element by one. Find the
// minimal number of moves required to obtain a strictly
// increasing sequence from the input.

// EXAMPLE
// For inputArray = [1, 1, 1], the output should be
// arrayChange(inputArray) = 3.

#include <iostream>
#include <vector>

int arrayChange(std::vector<int> inputArray)
{
        // Initialize an integer to store the final result in.
        int res = 0;

        // Initialize an integer to store the first value of the inputarry in.
        int first = inputArray[0];

        // Iterate through the zero based array from index 1.
        for (size_t i = 1; i < inputArray.size(); i++)
        {
                // Store the value of the current element.
                int now = inputArray[i];

                // If the current value is less than or equal to our "first" value,
                // then do the following equation below, and increase the "first" value
                // by 1, if not then change the "first" value to the current value.
                if (now <= first)
                {
                        res += (first - now) + 1;
                        first += 1;
                }
                else
                {
                        first = now;
                }
        }

        return res;
}
