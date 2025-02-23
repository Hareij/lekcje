#include <iostream>
#include <algorithm>

int binarySearch(int arr[], int left, int right, int target)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
        {
            return binarySearch(arr, left, mid - 1, target);
        }

        if (arr[mid] < target && arr[mid + 1] <= target)
        {
            return binarySearch(arr, mid + 1, right, target);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{

    int T[] = {5, 3, 6, 2, 8, 7, 4};
    int size = sizeof(T) / sizeof(T[0]);
    int x = 5;

    std::sort(T, T + size);

    int result = binarySearch(T, 0, size - 1, x);
    if (result != -1)
    {
        std::cout << " indeks liczby najbliższej lub równej x to : " << "  " << result << std::endl;
    }
    else
    {
        std::cout << " Nie ma liczby mniejszej lub równej x " << " " << std::endl;
    }

    return 0;
}
