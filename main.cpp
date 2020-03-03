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
    ShapeAreaResult(1, shapeArea(5));
}

void sat2()
{
    ShapeAreaResult(2, shapeArea(5));
}

void sat3()
{
    ShapeAreaResult(3, shapeArea(5));
}

void sat4()
{
    ShapeAreaResult(4, shapeArea(5));
}

void sat5()
{
    ShapeAreaResult(5, shapeArea(5));
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



int main()
{
    // Add Tests
    //at1();
    //at2();
    //at3();
    //at4();
    //at5();

    // Century From Year Tests
    //cfyt1();
    //cfyt2();
    //cfyt3();
    //cfyt4();
    //cfyt5();

    // Check Palindrome Tests
    //cp1();
    //cp2();
    //cp3();
    //cp4();
    //cp5();

    // Adjacent Elements Product Tests
    //aept1();
    //aept2();
    //aept3();
    //aept4();
    //aept5();

    // Almost Increasing Sequence Tests
    //aist1();
    //aist2();
    //aist3();
    //aist4();
    //aist5();

    return 0;
}
