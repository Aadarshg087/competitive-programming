#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // cout << "Size of array in function: " << sizeof(arr) << endl;
    // it will also throw the warning also.
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Size of array in main: " << sizeof(arr) << endl;
    printArray(arr, n);

    return 0;
}