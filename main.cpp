#include <tests.cpp>

void RunTest(int n)
{
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
                        CenturyFromYearTest(1, 1905, 20);
                        CenturyFromYearTest(2, 1700, 17);
                        CenturyFromYearTest(3, 1988, 20);
                        CenturyFromYearTest(4, 2000, 20);
                        CenturyFromYearTest(5, 2001, 21);
                        break;

                case 3:
                        CheckPalindromeTest(1, "aabaa", 21);
                        CheckPalindromeTest(2, "abac", 2);
                        CheckPalindromeTest(3, "a", 6);
                        CheckPalindromeTest(4, "az", 6);
                        CheckPalindromeTest(5, "abacaba", 50);
                        break;

                case 4:
                        AdjacentElementsProductTest(1, {3, 6, -2, -5, 7, 3}, 21);
                        AdjacentElementsProductTest(2, {-1, -2}, 2);
                        AdjacentElementsProductTest(3, {5, 1, 2, 3, 1, 4}, 6);
                        AdjacentElementsProductTest(4, {1, 2, 3, 0}, 6);
                        AdjacentElementsProductTest(5, {9, 5, 10, 2, 24, -1, -48}, 50);
                        break;

                case 5:
                        ShapeAreaTest(1, 2, 5);
                        ShapeAreaTest(2, 3, 13);
                        ShapeAreaTest(3, 1, 1);
                        ShapeAreaTest(4, 5, 41);
                        ShapeAreaTest(5, 7000, 97986001);
                        break;

                case 6:
                        MakeArrayConsecutive2Test(1, {6, 2, 3, 8}, 3);
                        MakeArrayConsecutive2Test(2, {0, 3}, 2);
                        MakeArrayConsecutive2Test(3, {5, 4, 6}, 0);
                        MakeArrayConsecutive2Test(4, {6, 3}, 2);
                        MakeArrayConsecutive2Test(5, {1}, 0);
                        break;

                case 7:
                        AlmostIncreasingSequenceTest(1, {1, 3, 2, 1}, false);
                        AlmostIncreasingSequenceTest(2, {1, 3, 2}, true);
                        AlmostIncreasingSequenceTest(3, {1, 2, 1, 2}, false);
                        AlmostIncreasingSequenceTest(4, {3, 6, 5, 8, 10, 20, 15}, false);
                        AlmostIncreasingSequenceTest(5, {1, 1, 2, 3, 4, 4}, false);
                        break;

                case 8:
                        MatrixElementsSumTest(1, {{ 0, 1, 1, 2 }, { 0, 5, 0, 0 }, { 2, 0, 3, 3 }}, 9);
                        MatrixElementsSumTest(2, {{ 1, 1, 1, 0 }, { 0, 5, 0, 1 }, { 2, 1, 3, 10 }}, 9);
                        MatrixElementsSumTest(3, {{ 1, 1, 1 }, { 2, 2, 2 }, { 3, 3, 3 }}, 18);
                        MatrixElementsSumTest(4, {{ 0 }}, 0);
                        MatrixElementsSumTest(5, {{ 1, 0, 3 }, { 0, 2, 1 }, { 1, 2, 0 }}, 5);
                        break;

                case 9:
                        AllLongStringsTest(1, {"aba", "aa", "ad", "vcd", "aba"}, {"aba", "vcd", "aba"});
                        AllLongStringsTest(2, {"aa"}, {"aa"});
                        AllLongStringsTest(3, {"abc", "eeee", "abcd", "dcd"}, {"eeee", "abcd"});
                        AllLongStringsTest(4, {"a", "abc", "cbd", "zzzzzz", "a", "abcdef", "asasa", "aaaaaa"}, {"zzzzzz", "abcdef", "aaaaaa"});
                        AllLongStringsTest(5, {"enyky", "benyky", "yely", "varennyky"}, {"varennyky"});
                        break;

                case 10:
                        CommonCharaterCountTest(1, "aabcc", "adcaa", 3);
                        CommonCharaterCountTest(2, "zzzz", "zzzzzzz", 4);
                        CommonCharaterCountTest(3, "abca", "xyzbac", 3);
                        CommonCharaterCountTest(4, "a", "b", 0);
                        CommonCharaterCountTest(5, "a", "aaa", 1);
                        break;

                case 11:
                        IsLuckyTest(1, 1230, true);
                        IsLuckyTest(2, 239017, false);
                        IsLuckyTest(3, 134008, true);
                        IsLuckyTest(4, 10, false);
                        IsLuckyTest(5,  11, true);
                        break;

                case 12:
                        SortByHeightTest(1, {-1, 150, 190, 170, -1, -1, 160, 180}, {-1, 150, 160, 170, -1, -1, 180, 190});
                        SortByHeightTest(2, {-1, -1, -1, -1, -1}, {-1, -1, -1, -1, -1});
                        SortByHeightTest(3, {-1}, {-1});
                        SortByHeightTest(4, {4, 2, 9, 11, 2, 16}, {2, 2, 4, 9, 11, 16});
                        SortByHeightTest(5, {2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2});
                        break;

                case 13:
                        ReverseInParenthesesTest(1, "(bar)", "rab");
                        ReverseInParenthesesTest(2, "foo(bar)baz", "foorabbaz");
                        ReverseInParenthesesTest(3, "foo(bar)baz(blim)", "foorabbazmilb");
                        ReverseInParenthesesTest(4, "foo(bar(baz))blim", "foobazrabblim");
                        ReverseInParenthesesTest(5, "", "");
                        break;

                case 14:
                        AlternatingSumsTest(1, {50, 60, 60, 45, 70}, {180, 105});
                        AlternatingSumsTest(2, {100, 50}, {100, 50});
                        AlternatingSumsTest(3, {80}, {80, 0});
                        AlternatingSumsTest(4, {100, 50, 50, 100}, {150, 150});
                        AlternatingSumsTest(5, {100, 51, 50, 100}, {150, 151});
                        break;

                case 15:
                        AddBorderTest(1, {"abc",
                                                          "ded"},
                                                         {"*****",
                                                          "*abc*",
                                                          "*ded*",
                                                          "*****"});

                        AddBorderTest(2, {"a"},
                                                         {"***",
                                                          "*a*",
                                                          "***"});

                        AddBorderTest(3, {"aa",
                                                          "**",
                                                          "zz"},
                                                         {"****",
                                                          "*aa*",
                                                          "****",
                                                          "*zz*",
                                                          "****"});

                        AddBorderTest(4, {"abcde",
                                                           "fghij",
                                                           "klmno",
                                                           "pqrst",
                                                           "uvwxy"},
                                                          {"*******",
                                                           "*abcde*",
                                                           "*fghij*",
                                                           "*klmno*",
                                                           "*pqrst*",
                                                           "*uvwxy*",
                                                           "*******"});

                        AddBorderTest(5, {"wzy**"},
                                                         {"*******",
                                                          "*wzy***",
                                                          "*******"});
                        break;
        }
}

int main()
{
        // Run tests on challenges, the number parameter is according to CodeSignals Challenge number.
        // There will always be 5 tests if possible.
        RunTest(15);

        return 0;
}
