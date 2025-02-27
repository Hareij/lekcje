#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

#define DOWN 10
#define UP 100
const int N = 10;
int T[N];

/* returns a random numer from the range DOWN to UP*/
int random_number()
{
    return DOWN + std::rand() % (UP - DOWN + 1);
}

/*This function works only on two digit numbers and it returns the product of both digits.*/
int digit_product(int x)
{
    int p = x / 10;
    int q = x % 10;
    return p * q;
}

/*returns true if a < b in terms of digit product*/
bool compare(int a, int b)
{
    int x = digit_product(a);
    int y = digit_product(b);
    return x < y;
}

int main()
{
    std::srand(std::time(nullptr));
    for (int i = 0; i < N; i++)
    {
        T[i] = random_number();
        std::cout << T[i] << std::endl;
    }

    std::cout << std::endl;

    std::sort(T, T + N, compare);
    for (int i = 0; i < N; i++)
        std::cout << T[i] << std::endl;

    return 0;
}
