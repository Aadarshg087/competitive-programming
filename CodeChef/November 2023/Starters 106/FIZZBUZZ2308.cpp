#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            int temp = arr[i] * arr[i + 1];
            if (temp - arr[i] != 0)
            {
                cout << temp - arr[i] << endl;
            }
            else
            {
                continue;
            }
        }
    }

    return 0;
}