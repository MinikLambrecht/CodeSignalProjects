#include <iostream>

bool isLucky(int n)
{
    const int Base = 10;

    auto fh = 0;
    auto sh = 0;

    for (size_t i = 0; i < sizeof(n); i++ )
    {
        auto divisor = Base;
        while (n / divisor > divisor )
        {
            divisor *= Base;
        }

        fh = n / divisor;
        sh = n % divisor;
    }



    std::cout << "First Half: " << std::to_string(fh) << std::endl << "Second Half: " << std::to_string(sh);
}
