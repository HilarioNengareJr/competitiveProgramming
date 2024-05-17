#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n);

int main()
{

    int arr[] = {3, 4, 2, 7, 9, 3, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    ios::sync_with_stdio(false);
    cin.tie(0);

    bubbleSort(arr, n);

    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i];
    }

    return 0;
}


// the function is void since it does not need to return anything/ modifies arr in -place
void bubbleSort(int arr[], int n)
{
    bool swapped;

    do
    {
        // initializing the swapped flag
        swapped = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);

                //if a swap occured we set swapped to true otherwise false
                swapped = true;
            }
        }

        // reduce the size of n after every full pass
        n--;
    }
    while (swapped); // while swap is true another swap is needed
}