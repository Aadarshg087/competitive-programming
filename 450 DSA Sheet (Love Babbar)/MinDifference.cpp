#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// // Incomplete
//  5
//  10
//  2 6 3 4 7 2 10 3 2 1

int getMinDiff(long long int arr[], int n, int k)
{
    sort(arr, arr + n);
    long long int temp1 = INT_MAX;
    long long int temp2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        temp1 = min(temp1, arr[i] + k);
        // temp1 = (temp1 < arr[i] + k) ? temp1 : (arr[i] + k);
        if ((arr[i] - k) < 0)
            continue;
        temp2 = max(temp2, arr[i] - k);
        // temp2 = (temp2 > arr[i] - k) ? temp2 : (arr[i] - k);
    }
    cout << temp1 << " " << temp2 << endl;

    return abs(temp2 - temp1);
}

int main()
{
    long long int k;
    cin >> k;
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getMinDiff(arr, n, k) << endl;

    return 0;
}