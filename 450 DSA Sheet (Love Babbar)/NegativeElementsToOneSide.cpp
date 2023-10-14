#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void segregateElements(int *arr, int n)
{
    int *arr2 = new int[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr2[j] = arr[i];
            arr[i] = INT_MAX;
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr2[j] = arr[i];
            j++;
        }
    }

    // Printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    segregateElements(arr, n);

    delete[] arr;

    return 0;
}