#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

const int N = 20;
const int up = 999;
const int down = 100;

int T[N];
int los(int up, int down)
{
    return down + std::rand() % (up - down + 1);
}

bool czypal(int liczba)
{
    return liczba / 100 == liczba % 100;
}

int main()
{

    std::srand(std::time(nullptr));
    for (int i = 0; i < N; i++)
        T[i] = los(up, down);

    int ostatnia = -1;

    for (int i = 0; i < N; i++)
    {
        std::cout << T[i] << std::endl;

        if (czypal(T[i]))
            ostatnia = T[i];
    }

    if (ostatnia != -1)
        std::cout << ostatnia << std::endl;
    else
        std::cout << " brak liczby palindromicznej" << std::endl;

    return 0;
}