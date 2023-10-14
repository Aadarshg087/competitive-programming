#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(int *arr, int n)
{
    int lastElement = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = lastElement;

    // Printing the array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
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

    rotate(arr, n);

    delete[] arr;

    return 0;
}