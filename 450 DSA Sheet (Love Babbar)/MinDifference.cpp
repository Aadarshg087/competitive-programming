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

    int ans = arr[n - 1] - arr[0];
    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;
    int minNum, maxNum;

    for (int i = 0; i < n; i++)
    {
        minNum = min(smallest, arr[i] - k);
        }
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