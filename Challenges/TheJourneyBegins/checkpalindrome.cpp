#include <iostream>
#include <string.h>

std::string s;

bool checkPalindrome(const std::string input_string)
{
    s = input_string;

    auto l = 0;

    const auto c = input_string.c_str();

    int h = strlen(c) - 1;

    while (h > l)
    {
        if (c[l++] != c[h--])
        {
            return false;
        }
    }

    return true;
}

void CheckPalindromeResult(int test, bool res)
{
    std::cout << "Check Palindrome Test #" + std::to_string(test)
              << std::endl
              << s + " is a palindrome: "
              << std::boolalpha
              << res
              << std::endl
              << std::endl;
}
