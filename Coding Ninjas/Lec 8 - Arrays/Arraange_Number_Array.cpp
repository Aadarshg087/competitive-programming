#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void arrange(int arr[], int n)
{
    int l = 1;
    int m = n - 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            arr[0] = i;
        }
        else if (i % 2 != 0)
        {
            arr[l] = i;
            l++;
        }
        else
        {
            arr[m] = i;
            m--;
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
        arrange(arr, n);

        for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    }

    return 0;
}