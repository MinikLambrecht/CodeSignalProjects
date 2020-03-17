#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray)
{
    // Initialize a new array to store the string higher or equal to the max length.
    std::vector<std::string> arr;

    // Initialize an unsigned long to store the max length found in the array.
    size_t max = 0;

    // Iterate through each string in the array. If the string length exceeds the current max, update it.
    for (auto str : inputArray)
    {        
        if (str.length() > max)
        {
            max = str.length();
        }
    }

    // Iterate through the array, and check if the string is larger or equal to the max length.
    // If it is, add the string to the array we initialized at the beginning.
    for(size_t i = 0; i < inputArray.size(); i++)
    {
        if (inputArray[i].length() >= max)
        {
            arr.push_back(inputArray[i]);
        }
    }

    return arr;
}

void AllLongetsStringsResult(int test, std::vector<std::string> vec)
{
    std::cout << "All Longets Strings Test #" + std::to_string(test)
              << std::endl
              << "The Longets Strings Is: ";

    for(size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }

    std::cout << std::endl
              << std::endl;
}
