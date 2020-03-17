#include <iostream>
#include <vector>

bool almostIncreasingSequence(std::vector<int> a)
{
    // Initialize long to store the number of elements in the array.
    size_t n = a.size();

    // Initialize long as array position.
    size_t p = -1;

    // Initialize long to store the current count.
    size_t c = 0;

    for (size_t i = 1; i < n; i++)
    {
        if (a[i - 1] >= a[i])
        {
            p = i;
            c++;
        }
    }

    // If c is greater than 0, return false;
    if (c > 1)
    {
        return 0;
    }

    // If c equals 0, return true.
    if (c == 0)
    {
        return 1;
    }

    // If p equals n-1 or 1, return true.
    if (p == n - 1 || p == 1)
    {
        return 1;
    }

    // If a[p-1] is less than <[p+1], return true.
    if (a[p - 1] < a[p + 1])
    {
        return 1;
    }

    // If a[p-2] is less than a[p], return true.
    if (a[p - 2] < a[p])
    {
        return 1;
    }

    // Return false by default if nothing else matched.
    return 0;
}

void AlmostIncreasingSequenceResult(int test, bool res)
{
    std::cout << "Almost Increasing Sequence Test #" + std::to_string(test)
              << std::endl
              << "Output: "
              << std::boolalpha
              << res
              << std::endl
              << std::endl;
}
