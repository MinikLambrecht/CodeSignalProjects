// TASK
// Last night you partied a little too hard. Now there's a black and
// white photo of you that's about to go viral! You can't let this
// ruin your reputation, so you want to apply the box blur
// algorithm to the photo to hide its content.

// The pixels in the input image are represented as integers. The
// algorithm distorts the input image in the following way: Every
// pixel x in the output image has a value equal to the average
// value of the pixel values from the 3 × 3 square that has its
// center at x, including x itself. All the pixels on the border of x are then removed.

// Return the blurred image as an integer, with the fractions
// rounded down.

// EXAMPLE
// For image = [[1, 1, 1],
//                         [1, 7, 1],
//                         [1, 1, 1]]
// the output should be boxBlur(image) = [[1]].

// To get the value of the middle pixel in the input 3 × 3 square:
// (1 + 1 + 1 + 1 + 7 + 1 + 1 + 1 + 1) = 15 / 9 = 1.66666 =
// 1. The border pixels are cropped from the final result.

// For image = [[7, 4, 0, 1],
//                         [5, 6, 2, 2],
//                         [6, 10, 7, 8],
//                         [1, 4, 2, 0]]
// the output should be boxBlur(image) = [[5, 4],
//                                                                           [4, 4]]
// There are four 3 × 3 squares in the input image, so there
// should be four integers in the blurred output. To get the first
// value: (7 + 4 + 0 + 5 + 6 + 2 + 6 + 10 + 7) = 47 / 9 =
// 5.2222 = 5. The other three integers are obtained the same
// way, then the surrounding integers are cropped from the final
// result.

#include <iostream>
#include <vector>

std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image)
{
        // Initialize two integers to store the number of Rows & Columns decreased by one.
        int rows = image.size() - 1;
        int cols = image[0].size() - 1;

        // initialize a new matrix array to store the final result in.
        std::vector<std::vector<int>> res;

        // Iterate through the rows.
        for (int i = 1; i < rows; i++)
        {
                // Initialzie a new interget array to store the current row in.
                std::vector<int> row;

                // Iterate through the columns.
                for (int j = 1; j < cols; j++)
                {
                        // Initialize a new integer to store the sum in.
                        int sum = 0;

                        // Calculate the sum of an 3x3 area around the index value.
                        for (int i1 = -1; i1 <= 1; i1++)
                        {
                                for (int j1 = -1; j1 <= 1; j1++)
                                {
                                        sum += image[i + i1][j + j1];
                                }
                        }

                        // Calculate the average in that 3x3 area and write the answer to a new row.
                        row.push_back(sum / 9);
                }

                // Push the finished row to our result and return it.
                res.push_back(row);
        }

        return res;
}
