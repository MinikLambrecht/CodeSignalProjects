#include <tests.cpp>

void RunTest(int n)
{
        std::vector<std::string> strVec;
        std::vector<int> intVec;
        std::vector<std::vector<int>> intMatrixVec;

        switch(n)
        {
                case 1:
                        AddTest(1, 1, 2, "3");
                        AddTest(2, 0, 1000, "1000");
                        AddTest(3, 2, -39, "-37");
                        AddTest(4, 99, 100, "199");
                        AddTest(5, -100, 100, "0");
                        break;

                case 2:
                        CenturyFromYearTest(1, 1905);
                        CenturyFromYearTest(2, 1700);
                        CenturyFromYearTest(3, 1988);
                        CenturyFromYearTest(4, 2000);
                        CenturyFromYearTest(5, 2001);
                        break;

                case 3:
                        CheckPalindromeTest(1, "aabaa");
                        CheckPalindromeTest(2, "abac");
                        CheckPalindromeTest(3, "a");
                        CheckPalindromeTest(4, "az");
                        CheckPalindromeTest(5, "abacaba");
                        break;

                case 4:
                        AdjacentElementsProductTest(1, {3, 6, -2, -5, 7, 3});
                        AdjacentElementsProductTest(2, {-1, -2});
                        AdjacentElementsProductTest(3, {5, 1, 2, 3, 1, 4});
                        AdjacentElementsProductTest(4, {1, 2, 3, 0});
                        AdjacentElementsProductTest(5, {9, 5, 10, 2, 24, -1, -48});
                        break;

                case 5:
                        ShapeAreaTest(1, 2);
                        ShapeAreaTest(2, 3);
                        ShapeAreaTest(3, 1);
                        ShapeAreaTest(4, 5);
                        ShapeAreaTest(5, 7000);
                        break;

                case 6:
                        MakeArrayConsecutive2Test(1, {6, 2, 3, 8});
                        MakeArrayConsecutive2Test(2, {0, 3});
                        MakeArrayConsecutive2Test(3, {5, 4, 6});
                        MakeArrayConsecutive2Test(4, {6, 3});
                        MakeArrayConsecutive2Test(5, {1});
                        break;

                case 7:
                        AlmostIncreasingSequenceTest(1, {1, 3, 2, 1});
                        AlmostIncreasingSequenceTest(2, {1, 3, 2});
                        AlmostIncreasingSequenceTest(3, {1, 2, 1, 2});
                        AlmostIncreasingSequenceTest(4, {3, 6, 5, 8, 10, 20, 15});
                        AlmostIncreasingSequenceTest(5, {1, 1, 2, 3, 4, 4});
                        break;

                case 8:
                        MatrixElementsSumTest(1, {{ 0, 1, 1, 2 }, { 0, 5, 0, 0 }, { 2, 0, 3, 3 }});
                        MatrixElementsSumTest(2, {{ 1, 1, 1, 0 }, { 0, 5, 0, 1 }, { 2, 1, 3, 10 }});
                        MatrixElementsSumTest(3, {{ 1, 1, 1 }, { 2, 2, 2 }, { 3, 3, 3 }});
                        MatrixElementsSumTest(4, {{ 0 }});
                        MatrixElementsSumTest(5, {{ 1, 0, 3 }, { 0, 2, 1 }, { 1, 2, 0 }});
                        break;

                case 9:
                        AllLongStringsTest(1, {"aba", "aa", "ad", "vcd", "aba"});
                        AllLongStringsTest(2, {"aa"});
                        AllLongStringsTest(3, {"abc", "eeee", "abcd", "dcd"});
                        AllLongStringsTest(4, {"a", "abc", "cbd", "zzzzzz", "a", "abcdef", "asasa", "aaaaaa"});
                        AllLongStringsTest(5, {"enyky", "benyky", "yely", "varennyky"});
                        break;

                case 10:
                        CommonCharaterCountTest(1, "aabcc", "adcaa");
                        CommonCharaterCountTest(2, "zzzz", "zzzzzzz");
                        CommonCharaterCountTest(3, "abca", "xyzbac");
                        CommonCharaterCountTest(4, "a", "b");
                        CommonCharaterCountTest(5, "a", "aaa");
                        break;

                case 11:
                        IsLuckyTest(1, 1230);
                        IsLuckyTest(2, 239017);
                        IsLuckyTest(3, 134008);
                        IsLuckyTest(4, 10);
                        IsLuckyTest(5,  11);
                        break;

                case 12:
                        SortByHeightTest(1, {-1, 150, 190, 170, -1, -1, 160, 180});
                        SortByHeightTest(2, {-1, -1, -1, -1, -1});
                        SortByHeightTest(3, {-1});
                        SortByHeightTest(4, {4, 2, 9, 11, 2, 16});
                        SortByHeightTest(5, {2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1});
                        break;
        }
}

int main()
{
        // Run tests on challenges, the number parameter is according to CodeSignals Challenge number.
        // There will always be 5 tests if possible.
        RunTest(1);

        return 0;
}
