// TASK
// Call two arms equally strong if the heaviest weights they each
// are able to lift are equal.

// Call two people equally strong if their strongest arms are
// equally strong (the strongest arm can be both the right and the
// left), and so are their weakest arms.

// Given your and your friend's arms' lifting capabilities find out
// if you two are equally strong.

// EXAMPLE
// For yourLeft = 10, yourRight = 15, friendsLeft = 15,
// and friendsRight = 10, the output should be
// areEquallyStrong(yourLeft, yourRight, friendsLeft,
// friendsRight) = true;

// For yourLeft = 15, yourRight = 10, friendsLeft = 15,
// and friendsRight = 10, the output should be
// areEquallyStrong(yourLeft, yourRight, friendsLeft,
// friendsRight) = true;

// For yourLeft = 15, yourRight = 10, friendsLeft = 15,
// and friendsRight = 9, the output should be
// areEquallyStrong(yourLeft, yourRight, friendsLeft,
// friendsRight) = false.

#include <iostream>
#include <algorithm>

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight)
{
        // Find max & min value from you and your friend, then compare the values.
        // If min & max values are the same return true, else return false.
        return std::max(yourLeft, yourRight) == std::max(friendsLeft, friendsRight) && std::min(yourLeft, yourRight) == std::min(friendsLeft, friendsRight);
}
