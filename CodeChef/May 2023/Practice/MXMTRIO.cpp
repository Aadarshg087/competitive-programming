#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int i = n - 1;
        int j = 0;
        int k = i - 1;

        long int max = (arr[i] - arr[j]) * arr[k];
        cout << max << endl;
    }

    return 0;
}