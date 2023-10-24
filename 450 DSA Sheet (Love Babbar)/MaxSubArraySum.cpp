#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long maxSubArraySum(int *arr, int n)
{
    long long max = INT_MIN;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[i];
        }

        if (max < sum)
            max = sum;
    }
    return max;
}

long long maxSubArraySum(int *arr, int n)
{
    long long sum = 0;
    long long maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
    }

    return maxi;
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