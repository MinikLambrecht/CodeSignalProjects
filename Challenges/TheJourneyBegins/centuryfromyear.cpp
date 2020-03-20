// TASK
// Given a year, return the century it is in. The first century spans
// from the year 1 up to and including the year 100, the second -
// from the year 101 up to and including the year 200, etc.

// EXAMPLE
// For year = 1905, the output should be
// centuryFromYear(year) = 20;

// For year = 1700, the output should be
// centuryFromYear(year) = 17.

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
