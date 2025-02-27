#include <iostream>
#include <algorithm>

int main()
{
    int elem = -1;
    int indeks = -1;
    int T[] = {5, 3, 6, 2, 8, 7, 4};
    int size = sizeof(T) / sizeof(T[0]);
    int x = 5;

    std::sort(T, T + size);

    for (int i = 0; i < size; i++)
    {
        if (T[i] <= x && T[i] > elem)
        {
            elem = T[i];
            indeks = i;
        }
    }
    if (elem > -1)
    {
        std::cout << "największa liczba najbliższa lub równa  x to : " << " " << elem << " " << "ma ona ideks : " << " " << indeks << std::endl;
    }

    else
    {
        std::cout << "nie ma w tablicy mniejszej lub równej liczby " << " " << elem << std::endl;
    }

    return 0;
}