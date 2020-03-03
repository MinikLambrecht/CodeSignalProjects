#include <iostream>
#include <vector>

bool almostIncreasingSequence(std::vector<int> a)
{
    int n = a.size();
    int p = -1;
    int c = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] >= a[i])
        {
            p = i, c++;
        }
    }

    if (c > 1)
        {
            return 0;
        }

        if (c == 0)
        {
            return 1;
        }

        if (p == n - 1 || p == 1)
        {
            return 1;
        }

        if (a[p - 1] < a[p + 1])
        {
            return 1;
        }

        if (a[p - 2] < a[p])
        {
            return 1;
        }

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
