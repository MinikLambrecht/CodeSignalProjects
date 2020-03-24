#include <Challenges/allchallenges.cpp>
#include <iostream>
#include <vector>

void AddTest(int test, int n1, int n2, std::string eo)
{
        auto res = add(n1, n2);

        std::cout << "Add Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl
                         << eo
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << std::to_string(res)
                         << std::endl
                         << std::endl
                         << std::endl;
}

void CenturyFromYearTest(int test, int year, int eo)
{
        auto res = centuryFromYear(year);

        std::cout << "Century From Year Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl
                         << std::to_string(eo)
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << std::to_string(res)
                         << std::endl
                         << std::endl
                         << std::endl;
}

void CheckPalindromeTest(int test, std::string input, bool eo)
{
        auto res =  checkPalindrome(input);

        std::cout << "Check Palindrome Test #" + std::to_string(test)
                         << std::endl
                         << std:: endl
                         << "Expected Output: "
                         << std::endl
                         << std::boolalpha
                         << eo
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << std::boolalpha
                         << res
                         << std::endl
                         << std::endl
                         << std::endl;
}

void AdjacentElementsProductTest(int test,  std::vector<int> vec, int eo)
{
        auto res = adjacentElementsProduct(vec);

        std::cout << "Adjacent Elements Product Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl
                         << std::to_string(eo)
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << std::to_string(res)
                         << std::endl
                         << std::endl
                         << std::endl;
}

void ShapeAreaTest(int test, int n, int eo)
{
        auto res =  shapeArea(n);

        std::cout << "Shape Area Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl
                         << std::to_string(eo)
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << std::to_string(res)
                         << std::endl
                         << std::endl
                         << std::endl;
}

void MakeArrayConsecutive2Test(int test, std::vector<int> vec, int eo)
{
        auto res = makeArrayConsecutive2(vec);

        std::cout << "Make Array Consecutive 2 Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl
                         << std::to_string(eo)
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << std::to_string(res)
                         << std::endl
                         << std::endl
                         << std::endl;
}

void AlmostIncreasingSequenceTest(int test, std::vector<int> vec, bool eo)
{
        auto res = almostIncreasingSequence(vec);

        std::cout << "Almost Increasing Sequence Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl
                         << std::boolalpha
                         << eo
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << std::boolalpha
                         << res
                         << std::endl
                         << std::endl
                         << std::endl;
}

void MatrixElementsSumTest(int test, std::vector<std::vector<int>> matrix, int eo)
{
        auto res = matrixElementsSum(matrix);

        std::cout << "Matrix Elements Sum Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl
                         << eo
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << std::to_string(res)
                         << std::endl
                         << std::endl
                         << std::endl;
}

void AllLongStringsTest(int test, std::vector<std::string> vec, std::vector<std::string> eo)
{
        vec = allLongestStrings(vec);

        std::cout << "All Longets Strings Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl;

        for(size_t i = 0; i < eo.size(); i++)
        {
                if (i <= 0)
                {
                        std::cout << eo[i];
                }
                else
                {
                         std::cout << ", " << eo[i];
                }
        }

        std::cout << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl;

        for(size_t i = 0; i < vec.size(); i++)
        {
                if (i <= 0)
                {
                        std::cout << vec[i];
                }
                else
                {
                         std::cout << ", " << vec[i];
                }
        }

        std::cout << std::endl
                         << std::endl
                         << std::endl;
}

void CommonCharaterCountTest(int test, std::string s1, std::string s2, int eo)
{
        auto res = commonCharacterCount(s1, s2);

        std::cout << "Common Character Count Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl
                         << std::to_string(eo)
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << std::to_string(res)
                         << std::endl
                         << std::endl
                         << std::endl;
}

void IsLuckyTest(int test, int n, bool eo)
{
        auto res = isLucky(n);

        std::cout << "Is Lucky Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl
                         << std::boolalpha
                         << eo
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << std::boolalpha
                         << res
                         << std::endl
                         << std::endl
                         << std::endl;
}

void SortByHeightTest(int test, std::vector<int> vec, std::vector<int> eo)
{
        vec = sortByHeight(vec);

        std::cout << "Sort By Height Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl;

        for(size_t i = 0; i < eo.size(); i++)
        {
                if (i <= 0)
                {
                        std::cout << eo[i];
                }
                else
                {
                        std::cout << ", " << eo[i];
                }
        }

        std::cout << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl;

        for(size_t i = 0; i < vec.size(); i++)
        {
                if (i <= 0)
                {
                        std::cout << vec[i];
                }
                else
                {
                        std::cout << ", " << vec[i];
                }
        }

        std::cout << std::endl
                         << std::endl
                         << std::endl;
}

void ReverseInParenthesesTest(int test, std::string inputStr, std::string eo)
{
        auto res = reverseInParentheses(inputStr);

        std::cout << "Reverse In Parentheses Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl
                         << eo
                         << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl
                         << res
                         << std::endl
                         << std::endl
                         << std::endl;
}

void AlternatingSumsTest(int test, std::vector<int> vec, std::vector<int> eo)
{
        vec = alternatingSums(vec);

        std::cout << "Alternating Sums Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl;

        for(size_t i = 0; i < eo.size(); i++)
        {
                if (i <= 0)
                {
                        std::cout << eo[i];
                }
                else
                {
                        std::cout << ", " << eo[i];
                }
        }

        std::cout << std::endl
                         << std::endl
                         << "Output: "
                         << std::endl;

        for(size_t i = 0; i < vec.size(); i++)
        {
                if (i <= 0)
                {
                        std::cout << vec[i];
                }
                else
                {
                        std::cout << ", " << vec[i];
                }
        }

        std::cout << std::endl
                         << std::endl
                         << std::endl;
}

void AddBorderTest(int test, std::vector<std::string> vec, std::vector<std::string> eo)
{
        auto res = addBorder(vec);

        std::cout << "Reverse In Parentheses Test #" + std::to_string(test)
                         << std::endl
                         << std::endl
                         << "Expected Output: "
                         << std::endl;

        for(auto row : eo)
        {
                std::cout << row << std::endl;
        }

        std::cout << std::endl
                         << "Output: "
                         << std::endl;

        for(auto row : res)
        {
                std::cout << row << std::endl;
        }

        std::cout << std::endl
                         << std::endl;
}
