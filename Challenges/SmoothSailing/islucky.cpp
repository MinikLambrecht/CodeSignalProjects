// TASK
// Ticket numbers usually consist of an even number of digits. A
// ticket number is considered lucky if the sum of the first half of
// the digits is equal to the sum of the second half.

// Given a ticket number n, determine if it's lucky or not.

// EXAMPLE
// For n = 1230, the output should be
// isLucky(n) = true;

// For n = 239017, the output should be
// isLucky(n) = false.

#include <iostream>

// Create a method to calculate the sum with.
int sum(std::string str)
{
        // Initialize an integer to store the final result in.
        int res = 0;

        // Iterate through the string and add up the number to the res integer.
        for (size_t i = 0; i < str.size(); i++)
        {
                res += str[i] - '0';
        }

        // Return the sum of the number.
        return res;
}

bool isLucky(int n)
{
        // Convert the number to a string and store it.
        auto nstr = std::to_string(n);

        // Get the first half of the string and store it.
        auto fh = nstr.substr(0, (int)(nstr.length() / 2));

        // Get the second half of the string and store it.
        auto sh = nstr.substr((int)(nstr.length() / 2), (int)(nstr.length() / 2));

       // Compare the two sums and return the final result.
       if (sum(fh) == sum(sh))
       {
               return true;
       }

       return false;
}
