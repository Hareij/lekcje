#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <exception>

#define UP 999
#define DOWN 100

/* Returns a positive integer from user input*/
int input()
{
    int N;

    while (true)
    {
        std::string input;
        std::cout << "podaj input (liczba dodatnia): ";
        std::cin >> input;

        try
        {
            N = std::stoi(input);
            if (N >= 0)
                break;
        }
        catch (std::invalid_argument &e)
        {
        }

        std::cout << "Nieprawidlowy input!" << std::endl;
    }

    return N;
}

/* Returns a random integer from the range [down, up] */
int random_integer()
{
    return DOWN + std::rand() % (UP - DOWN + 1);
}

/* returns true if number is a palindrom or false if not */
bool isPal(int number)
{
    return number / 100 == number % 100;
}

int main()
{
    std::srand(std::time(nullptr));
    int N = input();

    int last_pal = -1;
    for (int i = 0; i < N; i++)
    {
        int x = random_integer();
        std::cout << x << std::endl;
        // tutaj
        if (isPal(x))
            last_pal = x;
    }

    if (last_pal > 0)
    {
        std::cout << "Ostatni palindrom: " << last_pal << std::endl;
    }
    else
    {
        std::cout << "Nie znaleziono palindromu" << std::endl;
    }

    return 0;
}