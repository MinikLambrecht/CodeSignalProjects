// TASK
// Ratiorg got statues of different sizes as a present from
// CodeMaster for his birthday, each statue having an non-
// negative integer size. Since he likes to make things perfect, he
// wants to arrange them from smallest to largest so that each
// statue will be bigger than the previous one exactly by 1. He
// may need some additional statues to be able to accomplish that.
// Help him figure out the minimum number of additional statues needed.

// EXAMPLE
// For statues = [6, 2, 3, 8], the output should be
// makeArrayConsecutive2(statues) = 3.

// Ratiorg needs statues of sizes 4, 5 and 7.

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
