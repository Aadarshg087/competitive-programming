#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    ll n, q;
    cin >> n >> q;
    deque<int> d;
    vector<ll> operations(q);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        d.push_back(temp);
    }
    for (int i = 0; i < q; i++)
    {
        cin >> operations[i];
    }

    //  Brute Force
    for (int i = 0; i < d.size(); i++)
    {
        int t = operations[i];
        
        for(int j = 0)
    }

    for (int i = 0; i < q; i++)
    {
        int mod = operations[i] % d.size();
    }
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