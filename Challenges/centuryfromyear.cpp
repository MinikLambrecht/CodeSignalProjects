#include <iostream>

int centuryFromYear(int year)
{
    auto result = 0;

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
