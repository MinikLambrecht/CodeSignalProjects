#include <tests.cpp>

void RunTest(int n)
{
    switch(n)
    {
        case 1:
            at1();
            at2();
            at3();
            at4();
            at5();
        break;

        case 2:
            cfyt1();
            cfyt2();
            cfyt3();
            cfyt4();
            cfyt5();
        break;

        case 3:
            cp1();
            cp2();
            cp3();
            cp4();
            cp5();
        break;

        case 4:
            aept1();
            aept2();
            aept3();
            aept4();
            aept5();
        break;

        case 5:
            sat1();
            sat2();
            sat3();
            sat4();
            sat5();
        break;

        case 6:
            mac2t1();
            mac2t2();
            mac2t3();
            mac2t4();
            mac2t5();
        break;

        case 7:
            aist1();
            aist2();
            aist3();
            aist4();
            aist5();
        break;

        case 8:
            mest1();
            mest2();
            mest3();
            mest4();
            mest5();
        break;

        case 9:
            alst1();
            alst2();
            alst3();
            alst4();
            alst5();
        break;

        case 10:
            ccct1();
            ccct2();
            ccct3();
            ccct4();
            ccct5();
        break;

        case 11:
            ilt1();
        break;
    }
}

int main()
{
    // Run tests on challenges, the number parameter is according to CodeSignals Challenge number.
    // There will always be 5 tests if possible.
    RunTest(11);

    return 0;
}
