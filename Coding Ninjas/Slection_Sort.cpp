#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    n = 7;
    int arr[n] = {7, 8, 1, 2, 5, 9, 6};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min = arr[i];
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIndex = j;
            }
        }
        // Swap
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}