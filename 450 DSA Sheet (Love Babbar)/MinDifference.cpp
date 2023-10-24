#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Incomplete
int getMinDiff(int arr[], int n, int k)
{
    if (n == 1)
    {
        return 0;
    }

    sort(arr, arr + n);
    int maxNum;
    int minNum;

    int diff = arr[n - 1] - arr[0];
    int diff2;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] - k < 0)
            continue;
        maxNum = max(arr[n - 1], arr[i] + k);
        minNum = min(arr[0], arr[i] - k);
        diff2 = maxNum - minNum;
    }

    return diff2;
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
    int k;
    cin >> k;

    cout << getMinDiff(arr, n, k) << endl;

    return 0;
}