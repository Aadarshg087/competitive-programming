#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int total_sum = ((n - 2) * (n - 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = sum - total_sum;
    return ans;
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