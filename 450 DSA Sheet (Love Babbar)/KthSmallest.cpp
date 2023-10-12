#include <iostream>
// #include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int kthSmallest(int *arr, int l, int r, int k)
{
    int size = r + 1;
    sort(arr, arr + size);
    int ans = arr[k - 1];
    return ans; 
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
    int k;
    cin >> k;

    cout << kthSmallest(arr, 0, n - 1, k) << endl;

    return 0;
}