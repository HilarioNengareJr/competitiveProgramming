#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int value);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << binarySearch(arr, 10, 3);
    return 0;
}

int binarySearch(int arr[], int n, int value)
{
    int lowerBound = 0;
    int higherBound = n - 1;

    while (lowerBound <= higherBound)
    {
        int middle = (higherBound + lowerBound) / 2;

        if (arr[middle] > value)
        {
            higherBound = middle - 1; 
        }
        else if (arr[middle] < value)
        {
            lowerBound = middle + 1; 
        }
        else
        {
            return middle; 
        }
    }

    return -1; 
}
