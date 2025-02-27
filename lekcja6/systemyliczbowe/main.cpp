#include <iostream>
#include <string>
#include <map>
#include <algorithm>

std::map<int, char> symbols = {
    {0, '0'},
    {1, '1'},
    {2, '2'},
    {3, '3'},
    {4, '4'},
    {5, '5'},
    {6, '6'},
    {7, '7'},
    {8, '8'},
    {9, '9'},
    {10, 'A'},
    {11, 'B'},
    {12, 'C'},
    {13, 'D'},
    {14, 'E'},
    {15, 'F'}};

std::string to_hex(int dec)
{
    std::string res = "";

    while (dec > 0)
    {
        int remainder = dec % 16;
        dec /= 16;
        res += symbols[remainder];
    }

    std::reverse(res.begin(), res.end());

    return res;
}

int main()
{
    int x;
    std::cout << "Podaj liczbę w systemie 10: ";
    std::cin >> x;
    std::cout << std::endl;
    std::cout << "W systemie 16stkowym: " << to_hex(x) << std::endl;
    return 0;
}