#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Incomplete

// O(n^2) solution
long long maxSubArraySum(int *arr, int n)
{
    long long sum = 0;
    long long max = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        if (arr[i] > max)
            max = arr[i];

        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << "Sum: " << sum << endl;
            if (sum > max)
            {
                max = sum;
                cout << "Max: " << max << endl;
            }
        }
    }
    return max;
}

//  Kadane's Algo
long long kadaneAlgo(int *arr, int n)
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