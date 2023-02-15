#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n)
{
    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        unique = unique ^ arr[i];
    }
    return unique;
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
        cout << findUnique(arr, n);
    }

    return 0;
}