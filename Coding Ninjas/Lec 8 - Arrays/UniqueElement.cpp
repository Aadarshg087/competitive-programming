#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            return arr[i];
        }
    }
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
        cout << findUnique(arr, n) << endl;
    }

    return 0;
}