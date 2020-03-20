// TASK
// After becoming famous, the CodeBots decided to move into a
// new building together. Each of the rooms has a different cost,
// and some of them are free, but there's a rumour that all the free
// rooms are haunted! Since the CodeBots are quite superstitious,
// they refuse to stay in any of the free rooms, or any of the rooms
// below any of the free rooms.

// Given matrix, a rectangular matrix of integers, where each
// value represents the cost of the room, your task is to return the
// total sum of all rooms that are suitable for the CodeBots (ie: add
// up all the values that don't appear below a 0).

// EXAMPLE
// For

//matrix = [[0, 1, 1, 2],
//                [0, 5, 0, 0],
//                [2, 0, 3, 3]]

// the output should be
// matrixElementsSum(matrix) = 9.

// There are several haunted rooms, so we'll disregard them
// as well as any rooms beneath them. Thus, the answer is
// 1 + 5 + 1 + 2 = 9.

// IMAGE SOURCE
// https://codesignal.s3.amazonaws.com/tasks/matrixElementsSum/img/example1.png?_tm=1582038746746

#include <iostream>
#include <vector>

int matrixElementsSum(std::vector<std::vector<int>> matrix)
{
        // Initialize a new integer to store the total cost in.
        auto cost = 0;

        // Iterate through the matrix, and add up the price.
        // If the price above or below is 0, ignore the number.
        for (size_t i = 0; i < matrix[0].size(); i++)
        {
                for (size_t j = 0; j < matrix.size(); j++)
                {
                        if(matrix[j][i] == 0)
                        {
                                break;
                        }
                        else
                        {
                                cost += matrix[j][i];
                        }
                }
        }

        return cost;
}
