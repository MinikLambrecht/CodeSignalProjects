// TASK
// You are given an array of integers representing coordinates of
// obstacles situated on a straight line.

// Assume that you are jumping from the point with coordinate 0
// to the right. You are allowed only to make jumps of the same
// length represented by some integer.

// Find the minimal length of the jump enough to avoid all the
// obstacles.

// EXAMPLE
// For inputArray = [5, 3, 6, 7, 9], the output should be
// avoidObstacles(inputArray) = 4.

// Check out the image below for better understanding:

// IMAGE SOURCE
// https://codesignal.s3.amazonaws.com/tasks/avoidObstacles/img/example.png?_tm=1581994811750

#include <iostream>
#include <vector>

int avoidObstacles(std::vector<int> inputArray)
{
        // Iterate through the inputArray from 2 to 'infinity'.
        for (int step = 2; ; step++)
        {
                // Initialize a new boolean to indicate if we've hit an obstacle.
                bool noObstacle = true;

                // Divide each array value with the current step.
                // If the remainder equals 0, return false, and break
                // the loop.
                for (auto val: inputArray)
                {
                        if (val % step == 0)
                        {
                                noObstacle = false;
                                break;
                        }
                }

                // If no obstacle was hit, return the step value.
                if (noObstacle)
                {
                        return step;
                }
        }

        return -1;
}
