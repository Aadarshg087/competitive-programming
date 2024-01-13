#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n, sum;
    cin >> n >> sum;
    if (n > sum)
    {
        cout << "NO" << endl;
        return;
    }
    vector<int> v;

    if (n & 1)
    {
        for (int i = 1; i <= n - 1; i++)
        {
            v.push_back(1);
        }
        int temp = sum - (n - 1);
        v.push_back(temp);
    }
    else
    {
        if (sum & 1)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            for (int i = 1; i <= n - 2; i++)
            {
                v.push_back(1);
            }
            int temp = (sum - (n - 2)) / 2;
            v.push_back(temp);
            v.push_back(temp);
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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