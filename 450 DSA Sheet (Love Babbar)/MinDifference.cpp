#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// // Incomplete
//  5
//  10
//  2 6 3 4 7 2 10 3 2 1

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);

    int largest = arr[n - 1] - k;
    int smallest = arr[0] + k;
    int diff = arr[n - 1] - arr[0];

    for (int i = 0; i < n - 1; i++)

    {
        int minElement = min(smallest, arr[i + 1] - k);
        int maxElement = max(largest, arr[i] + k);

        if (minElement < 0)
            continue;

        diff = min(diff, maxElement - minElement);
    }

    return diff;
}

int main()
{
    int k;
    cin >> k;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getMinDiff(arr, n, k) << endl;

    return 0;
}