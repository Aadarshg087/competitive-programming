#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

int checkFunction(vector<int> &v)
{
    int low = 0;
    int high = v.size() - 1;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        // int mid = low + (high - low) / 2;
        if (v[mid] == 1)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int lowerB(vector<int> &arr, int x)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size();
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int upperB(vector<int> &arr, int x)
{
    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size();
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    // vector<int> v{0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    // int ans = checkFunction(v);
    // cout << ans << endl;
    // cout << v[ans - 1] << " " << v[ans] << endl;

    // Designing Lower Bound and Upper Bound
    vector<int> arr{1, 2, 3, 5, 8, 9, 11, 14, 18, 24, 28};
    int x = 28;
    int l = lowerB(arr, x);
    int u = upperB(arr, x);
    cout << l << " " << u << endl;
    // cout << arr[l] << " " << arr[u] << endl;

    return 0;
}