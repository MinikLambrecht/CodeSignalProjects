#include <algorithm>
#include <iostream>
#include <vector>

int makeArrayConsecutive2(std::vector<int> statues)
{
        // Sort the array in acsending order.
        std::sort(statues.begin(), statues.end());

        // Return statues after sorting and applying the formula below.
        return statues[statues.size() - 1] - statues[0] - statues.size() + 1;
}
