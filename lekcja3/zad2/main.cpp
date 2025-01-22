#include <iostream>

int main()
{
    int x = 1;
    int *wskaznik = &x;
    std::cout << x << std::endl;
    std::cout << &x << std::endl;
    std::cout << wskaznik + 100 << std::endl;
    std::cout << *(wskaznik + 100) << std::endl;
    return 0;
}