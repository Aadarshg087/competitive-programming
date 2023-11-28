#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

bool SortbySec(pair<int, int> &a, pair<int, int> &b)
{
    return a.second > b.second;
}

int kMostFrequent(int arr[], int n, int k)
{
    // Your code here
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    vector<pair<int, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), SortbySec);

    // for (int i = 0; i <= n - k; i++)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += v[i].second;
    }

    return sum;
}

void solve()
{
    int arr[] = {3, 1, 4, 4, 5, 2, 6, 1};
    // 8
    // 3 1 4 4 5 2 6 1
    cout << kMostFrequent(arr, 8, 3) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}