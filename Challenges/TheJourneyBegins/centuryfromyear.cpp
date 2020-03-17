#include <iostream>

int centuryFromYear(int year)
{
    // Initialize an integer to store our result in.
    auto result = 0;

    // Calculate if the remainder is equal to 0 or not.
    // If the remainder is 0, divide the year with 100 to get the century.
    // If the remainder is not 0, divide the year with 100 and add one to get the century.
    // E.g. 1700/100 = 17th century, or 1705/100+1 = 18th century.
    if (year % 100 == 0)
    {
        result = year / 100;
    }
    else
    {
        result = year / 100 + 1;
    }

    return result;
}

void CenturyFromYearResult(int test, int res)
{
    std::cout << "Century From Year Test #" + std::to_string(test)
              << std::endl
              << "Output: " + std::to_string(res)
              << std::endl
              << std::endl;
}
