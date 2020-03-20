// TASK
// Given the string, check if it is a palindrome.

// EXAMPLE
// For inputString = "aabaa", the output should be
// checkPalindrome(inputString) = true;

// For inputString = "abac", the output should be
// checkPalindrome(inputString) = false;

// For inputString = "a", the output should be
// checkPalindrome(inputString) = true.

#include <iostream>
#include <string.h>

bool checkPalindrome(const std::string input_string)
{
        // Initialize a long and use it for the while loop,
        // and as a position parameter for the char array.
        size_t l = 0;

        // Initialize inputstring as an Const char*.
        const auto c = input_string.c_str();

        // Initialize a long to store the inputstrings length.
        size_t len = strlen(c) - 1;

        // Loop until len is less than l.
        while (len > l)
        {
                if (c[l++] != c[len--])
                {
                        return false;
                }
        }

        return true;
}
