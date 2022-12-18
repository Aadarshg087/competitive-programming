#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (n % 2 != 0)
        {
            if (i == n - 1)
            {
                continue;
            }
        }
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
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
        swapAlternate(arr, n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}