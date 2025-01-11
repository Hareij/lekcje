#include <iostream>

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        std::cout << i << " ";
        if (i % 5 == 0)
        {
            std::cout << "Fiz";
        }
        if (i % 2 == 0)
        {
            std::cout << "Buzz";
        }

        std::cout << std::endl;
    }
    return 0;
}