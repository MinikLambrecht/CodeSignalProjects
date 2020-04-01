// TASK
// Two arrays are called similar if one can be obtained from
// another by swapping at most one pair of elements in one of the
// arrays.

// Given two arrays a and b, check whether they are similar.

// EXAMPLE
// For a = [1, 2, 3] and b = [1, 2, 3], the output
// should be
// areSimilar(a, b) = true.

// The arrays are equal, no need to swap any elements.

// For a = [1, 2, 3] and b = [2, 1, 3], the output
// should be
// areSimilar(a, b) = true.

// We can obtain b from a by swapping 2 and 1 in b.

// For a = [1, 2, 2] and b = [2, 1, 1], the output
// should be
// areSimilar(a, b) = false.

// Any swap of any two elements either in a or in b won't
// make a and b equal.
#include <iostream>
#include <vector>


bool areSimilar(std::vector<int> a, std::vector<int> b)
{
        // Initialize an  integer to store the count.
        int count = 0;

        // Initialize 4 integers to store various values for comparison later in the cycle.
        int a1, a2, b1, b2;

        // Iterate through the different possibilities.
        for (size_t i = 0; i < a.size(); i++)
        {
                // If the first element of each array is the same, continue the loop.
                if (a[i] == b[i])
                {
                        continue;
                }

                // Increase count by 1.
                count++;

                // If count is greater than or equal to 3, return as false.
                if (count >= 3)
                {
                        return false;
                }

                // If count equals 1, store the value of the current elements from each array.
                if (count == 1)
                {
                        a1 = a[i];
                        b1 = b[i];
                }

                // If count equals 2, store the value of the current elements again.
                if (count == 2)
                {
                        a2 = a[i];
                        b2 = b[i];
                }
        }

        return count == 0 || (count == 2 && a1 == b2 && a2 == b1);
}
