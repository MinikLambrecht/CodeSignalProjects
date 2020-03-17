#include <Challenges/allchallenges.cpp>
#include <iostream>
#include <vector>

void at1()
{
    AddResult(1, add(1, 2));
}

void at2()
{
    AddResult(2, add(0, 1000));
}

void at3()
{
    AddResult(3, add(2, -39));
}

void at4()
{
    AddResult(4, add(99, 100));
}

void at5()
{
    AddResult(5, add(-100, 100));
}



void cfyt1()
{
    CenturyFromYearResult(1, centuryFromYear(1905));
}

void cfyt2()
{
    CenturyFromYearResult(2, centuryFromYear(1700));
}

void cfyt3()
{
    CenturyFromYearResult(3, centuryFromYear(1988));
}

void cfyt4()
{
    CenturyFromYearResult(4, centuryFromYear(2000));
}

void cfyt5()
{
    CenturyFromYearResult(5, centuryFromYear(2001));
}



void cp1()
{
    CheckPalindromeResult(1, checkPalindrome("aabaa"));
}

void cp2()
{
    CheckPalindromeResult(2, checkPalindrome("abac"));
}

void cp3()
{
    CheckPalindromeResult(3, checkPalindrome("a"));
}

void cp4()
{
    CheckPalindromeResult(4, checkPalindrome("az"));
}

void cp5()
{
    CheckPalindromeResult(5, checkPalindrome("abacaba"));
}



void aept1()
{
    std::vector<int> vec {3, 6, -2, -5, 7, 3};
    AdjacentElementsProductResult(1, adjacentElementsProduct(vec));
}

void aept2()
{
    std::vector<int> vec {-1, -2};
    AdjacentElementsProductResult(2, adjacentElementsProduct(vec));
}

void aept3()
{
    std::vector<int> vec {5, 1, 2, 3, 1, 4};
    AdjacentElementsProductResult(3, adjacentElementsProduct(vec));
}

void aept4()
{
    std::vector<int> vec {1, 2, 3, 0};
    AdjacentElementsProductResult(4, adjacentElementsProduct(vec));
}

void aept5()
{
    std::vector<int> vec {9, 5, 10, 2, 24, -1, -48};
    AdjacentElementsProductResult(5, adjacentElementsProduct(vec));
}



void sat1()
{
    ShapeAreaResult(1, shapeArea(2));
}

void sat2()
{
    ShapeAreaResult(2, shapeArea(3));
}

void sat3()
{
    ShapeAreaResult(3, shapeArea(1));
}

void sat4()
{
    ShapeAreaResult(4, shapeArea(5));
}

void sat5()
{
    ShapeAreaResult(5, shapeArea(7000));
}



void mac2t1()
{
    std::vector<int> vec {6, 2, 3, 8};
    MakeArrayConsecutive2Result(1, makeArrayConsecutive2(vec));
}

void mac2t2()
{
    std::vector<int> vec {0, 3};
    MakeArrayConsecutive2Result(2, makeArrayConsecutive2(vec));
}

void mac2t3()
{
    std::vector<int> vec {5, 4, 6};
    MakeArrayConsecutive2Result(3, makeArrayConsecutive2(vec));
}

void mac2t4()
{
    std::vector<int> vec {6, 3};
    MakeArrayConsecutive2Result(4, makeArrayConsecutive2(vec));
}

void mac2t5()
{
    std::vector<int> vec {1};
    MakeArrayConsecutive2Result(5, makeArrayConsecutive2(vec));
}



void aist1()
{
    std::vector<int> vec{1, 3, 2, 1};
    AlmostIncreasingSequenceResult(1, almostIncreasingSequence(vec));
}

void aist2()
{
    std::vector<int> vec{1, 3, 2};
    AlmostIncreasingSequenceResult(2, almostIncreasingSequence(vec));
}

void aist3()
{
    std::vector<int> vec{1, 2, 1, 2};
    AlmostIncreasingSequenceResult(3, almostIncreasingSequence(vec));
}

void aist4()
{
    std::vector<int> vec{3, 6, 5, 8, 10, 20, 15};
    AlmostIncreasingSequenceResult(4, almostIncreasingSequence(vec));
}

void aist5()
{
    std::vector<int> vec{1, 1, 2, 3, 4, 4};
    AlmostIncreasingSequenceResult(5, almostIncreasingSequence(vec));
}



void mest1()
{
    std::vector<std::vector<int> > matrix{{ 0, 1, 1, 2 },
                                          { 0, 5, 0, 0 },
                                          { 2, 0, 3, 3 }};

    MatrixElementsSumResult(1, matrixElementsSum(matrix));
}

void mest2()
{
    std::vector<std::vector<int> > matrix{{ 1, 1, 1, 0 },
                                          { 0, 5, 0, 1 },
                                          { 2, 1, 3, 10 }};

    MatrixElementsSumResult(2, matrixElementsSum(matrix));
}

void mest3()
{
    std::vector<std::vector<int> > matrix{{ 1, 1, 1 },
                                          { 2, 2, 2 },
                                          { 3, 3, 3 }};

    MatrixElementsSumResult(3, matrixElementsSum(matrix));
}

void mest4()
{
    std::vector<std::vector<int> > matrix{{ 0 }};

    MatrixElementsSumResult(4, matrixElementsSum(matrix));
}

void mest5()
{
    std::vector<std::vector<int> > matrix{{ 1, 0, 3 },
                                          { 0, 2, 1 },
                                          { 1, 2, 0 }};

    MatrixElementsSumResult(5, matrixElementsSum(matrix));
}



void alst1()
{
    std::vector<std::string> vec {"aba",
                                  "aa",
                                  "ad",
                                  "vcd",
                                  "aba"};

    AllLongetsStringsResult(1, allLongestStrings(vec));
}

void alst2()
{
    std::vector<std::string> vec {"aa"};

    AllLongetsStringsResult(2, allLongestStrings(vec));
}

void alst3()
{
    std::vector<std::string> vec {"abc",
                                  "eeee",
                                  "abcd",
                                  "dcd"};

    AllLongetsStringsResult(3, allLongestStrings(vec));
}

void alst4()
{
    std::vector<std::string> vec {"a",
                                  "abc",
                                  "cbd",
                                  "zzzzzz",
                                  "a",
                                  "abcdef",
                                  "asasa",
                                  "aaaaaa"};

    AllLongetsStringsResult(4, allLongestStrings(vec));
}

void alst5()
{
    std::vector<std::string> vec {"enyky",
                                  "benyky",
                                  "yely",
                                  "varennyky"};

    AllLongetsStringsResult(5, allLongestStrings(vec));
}



void ccct1()
{
    auto s1 = "aabcc";
    auto s2 = "adcaa";

    CommonCharacterCountResult(1, commonCharacterCount(s1, s2));
}

void ccct2()
{
    auto s1 = "zzzz";
    auto s2 = "zzzzzzz";

    CommonCharacterCountResult(2, commonCharacterCount(s1, s2));
}

void ccct3()
{
    auto s1 = "abca";
    auto s2 = "xyzbac";

    CommonCharacterCountResult(3, commonCharacterCount(s1, s2));
}

void ccct4()
{
    auto s1 = "a";
    auto s2 = "b";

    CommonCharacterCountResult(4, commonCharacterCount(s1, s2));
}

void ccct5()
{
    auto s1 = "a";
    auto s2 = "aaa";

    CommonCharacterCountResult(5, commonCharacterCount(s1, s2));
}



void ilt1()
{
    isLucky(12345678);
}
