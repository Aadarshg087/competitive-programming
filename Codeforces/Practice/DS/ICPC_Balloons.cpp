#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ballons = 2;
    map<int, int> m;
    m.insert({arr[0], 2});
    for (int i = 1; i < n; i++)
    {
        if (m.find(arr[i]) == m.end())
        {
            m.insert({arr[i], 2});
            ballons += 2;
        }
        else
        {
            m[arr[i]]++;
            ballons++;
        }
    }
    cout << ballons << endl;

    // CHECK
    // int sum = 0;
    // for (auto i : m)
    // {
    //     sum += i.second;
    // }

    // cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}