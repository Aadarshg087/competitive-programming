#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    cout << "Hello World" << endl;
}

int findDuplicate(int arr[], int n)
{
    insertionSort(arr, n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findDuplicate(arr, n);
    }

    return 0;
}