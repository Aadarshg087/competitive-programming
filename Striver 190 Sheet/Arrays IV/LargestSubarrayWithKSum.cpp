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

// Brute force
int maxLen(vector<int> &A, int n)
{
    // Your code here
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += A[j];
            if (sum == 0)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }
    }
    return maxLen;
}

// Better approach
int maxLen1(vector<int> &arr, int n)
{
    vector<int> pre(n + 1);
    unordered_map<int, pair<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = arr[i] + pre[i];
        if (mp[pre[i + 1]].first == 0)
        {
            mp[pre[i + 1]].first = i + 1;
            mp[pre[i + 1]].second = i + 1;
        }
        else
        {
            mp[pre[i + 1]].second = i + 1;
        }
    }

    int maxLen = 0;
    for (auto i : mp)
    {
        int diff = i.second.second - i.second.first;
        if (diff > maxLen)
        {
            maxLen = diff;
        }
    }
    int ans = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (pre[i] == 0)
        {
            ans = i;
        }
    }

    return max(maxLen, ans);

    // for (int i : pre)
    //     cout << i << " ";
    // cout << endl;
    return maxLen;

    // int f = -1;
    // int s = 1;
    // for (int i = 1; i < n + 1; i++)
    // {
    //     s = i;
    //     if (f == -1)
    //         f = i;
    // }
    // int ans = s - f;
    // return ans;
}

// 1 2 3 4 5

int main()
{
    // vector<int> v{15, -2, 2, -8, 1, 7, 3, 4, 5, 6, 7, -25};
    vector<int> v{8, 9, -6, 1, -4};
    int n = v.size();
    cout << maxLen1(v, n) << endl;

    return 0;
}