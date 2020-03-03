#include <algorithm>
#include <iostream>
#include <vector>

int makeArrayConsecutive2(std::vector<int> statues)
{
    std::sort(statues.begin(), statues.end());
    return statues[statues.size() - 1] - statues[0] - statues.size() + 1;
}

void MakeArrayConsecutive2Result(int test, int res)
{
    std::cout << "Make Array Consecutive 2 Test #" + std::to_string(test)
              << std::endl
              << "Output: " + std::to_string(res)
              << std::endl
              << std::endl;
}
