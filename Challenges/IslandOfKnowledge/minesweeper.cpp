// TASK
// In the popular Minesweeper game you have a board with some
// mines and those cells that don't contain a mine have a number
// in it that indicates the total number of mines in the
// neighboring cells. Starting off with some arrangement of mines
// we want to create a Minesweeper game setup.

// EXAMPLE
// for matrix = [[true, false, false],
//                         [false, true, false],
//                         [false, false, false]]
// the output should be
// minesweeper(matrix) = [[1, 2, 1],
//                                              [2, 1, 1],
//                                              [1, 1, 1]]
// Check out the image below for better understanding:

// IMAGE SOURCE
// https://codesignal.s3.amazonaws.com/tasks/minesweeper/img/example.png?_tm=1582043430722

#include <iostream>
#include <vector>

std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix)
{
        std::vector<std::vector<int>> res;

        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++)
        {
                std::vector<int> row;

                for (int j = 0; j < n; j++)
                {
                        int count = 0;

                        for (int i1 = -1; i1 <= 1; i1++)
                        {
                                for (int j1 = -1; j1 <= 1; j1++)
                                {
                                        int i2 = i + i1, j2 = j + j1;

                                        if (i2 == i && j2 == j)
                                        {
                                                continue;
                                        }

                                        if (0 <= i2 && i2 < m && 0 <= j2 && j2 < n)
                                        {
                                                count += matrix[i2][j2] ? 1 : 0;
                                        }
                                }
                        }

                        row.push_back(count);
                }

                res.push_back(row);
        }

        return res;
}
