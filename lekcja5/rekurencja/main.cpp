#include <iostream>

bool contains(int T[], int n, int x)
{
    if (n == 0)
        return false;
    if (T[n - 1] == x)
        return true;

    return contains(T, n - 1, x);
}

int L[1000];
int R[1000];

void quickSort(int T[], int left, int right)
{
    // Base cases:
    if (left >= right)
        return;

    if (right - left == 1)
        return;

    if (right - left == 2)
    {
        if (T[left] > T[left + 1])
        {
            int tmp = T[left];
            T[left] = T[left + 1];
            T[left + 1] = tmp;
        }
        return;
    }

    // Splitting logic:
    int pivot = T[right - 1];

    int l = 0, r = 0;

    for (int i = left; i < right - 1; i++)
    {
        int elem = T[i];
        if (elem >= pivot)
        {
            R[r] = elem;
            r++;
        }
        else
        {
            L[l] = elem;
            l++;
        }
    }

    for (int i = 0; i < l; i++)
        T[left + i] = L[i];

    T[left + l] = pivot;

    for (int i = 0; i < r; i++)
        T[left + l + 1 + i] = R[i];

    quickSort(T, left, left + l);
    quickSort(T, left + l + 1, right);
}

// (0 1) 1 2 3 5 8 13 ...

// F(i) = F(i-1) + F(i-2)
// F(0) = 0
// F(1) = 1
int fibbonacci(int i)
{
    if (i < 0)
        return -1;

    if (i == 0 || i == 1)
        return i;

    return fibbonacci(i - 1) + fibbonacci(i - 2);
}

// fibbbonacci(0) = 0
// fibbonacci(1) = 1
// fibbonacci(2) = fibbonacci(1) [1] + fibbonacci(0) [0] = 1
// fibbonacci(3) = fibbonacci(2) [i] + fibbonacci(1) [1] =2

int T[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int S[6] = {6, 8, 3, 7, 9, 2};

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << " Dla 3: " << contains(T, 10, 3) << std::endl;
    std::cout << " Dla 11: " << contains(T, 10, 11) << std::endl;

    std::cout << "Fibbonacci dla 0: " << fibbonacci(0) << std::endl;
    std::cout << "Fibbonacci dla 1: " << fibbonacci(1) << std::endl;
    std::cout << "Fibbonacci dla 2: " << fibbonacci(2) << std::endl;
    std::cout << "Fibbonacci dla 3: " << fibbonacci(3) << std::endl;

    std::cout << "QuickSort: " << std::endl;
    for (int i = 0; i < 6; i++)
        std::cout << S[i] << " ";

    std::cout << std::endl;

    quickSort(S, 0, 6);

    for (int i = 0; i < 6; i++)
        std::cout << S[i] << " ";

    std::cout << std::endl;

    return 0;
}