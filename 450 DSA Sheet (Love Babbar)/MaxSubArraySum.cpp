#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long maxSubArraySum(int *arr, int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int j = n - 1;
    long long max = sum;
    // cout << sum << endl;
    while (j > 0)
    {
        sum -= arr[j];
        // cout << sum << " ";
        if (sum > max)
        {
            max = sum;
        }

        j--;
    }
    // cout << endl;

    return max;
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

    cout << maxSubArraySum(arr, n) << endl;

    return 0;
}