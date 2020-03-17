# include <algorithm>
#include <iostream>
#include <vector>

std::vector<int> sortByHeight(std::vector<int> a)
{
        // Initialize a new vector, and sort the array in an ascending order.
        std::vector<int> b(a.begin(), a.end());
        std::sort(b.begin(), b.end());

        // Remove every -1 in the newly initialized vector, so we only have the heights in order.
        b.erase(std::remove(b.begin(), b.end(), -1), b.end());

        // Initialize a new integer to store a position value.
        int pos = 0;

        // Iterate through the first vector and add our value at position i.
        // unless the value equals -1.
        // If a new value has been added, increase the pos value.
        for (size_t i = 0; i < a.size(); i++)
        {
                if (a[i] != -1)
                {
                        a[i] = b[pos++];
                }
        }

        return a;
}
