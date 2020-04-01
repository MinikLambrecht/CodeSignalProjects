// TASK
// Given a string, find out if its characters can be rearranged to
// form a palindrome.

// EXAMPLE
// For inputString = "aabb", the output should be
// palindromeRearranging(inputString) = true.

// We can rearrange "aabb" to make "abba", which is a
// palindrome.

#include <iostream>
#include <map>

bool palindromeRearranging(std::string inputString)
{
        // Initialize an empty container to store the characters in.
        std::map<char, int> cache;

        // Initialize an integer to store the final result in.
        int res = 0;

        // Iterate through every characer in the inputstring.
        for (auto ch: inputString)
        {
                // If the current character equals the last in the cache container,
                // change the result to 0 (false), else return as 1 (true).
                if (cache.find(ch) == cache.end())
                {
                        cache[ch] = 0;
                }

                // True
                cache[ch]++;
        }


        for (auto pair: cache)
        {
                // If the following equation does not equal 0, increase res by 1.
                // e.g. 0 %(Mod) 2 = 0 or 1 %(Mod) 2 = 1.
                if (pair.second % 2 != 0)
                {
                        res++;
                }
        }

        // If 'res' is less than or equal to 1 return true.
        return res <= 1;
}
