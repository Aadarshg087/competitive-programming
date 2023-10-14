#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n)
{
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }
    n = n - 1;
    int sum = n * (n + 1) / 2;
    cout << totalSum << " " << sum << endl;
    return totalSum - sum;
    // 5
    // 1 2 3 4 5 4
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findDuplicate(arr, n) << endl;

    return 0;
}