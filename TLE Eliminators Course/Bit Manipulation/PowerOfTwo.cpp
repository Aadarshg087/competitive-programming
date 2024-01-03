#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    ll n, k;
    cin >> n >> k;
    int setBits = __builtin_popcountll(n);
    if (k < setBits || k > n)
    {
        cout << "NO" << endl;
        return;
    }

    vector<int> ans;
    for (int i = 0; i < 32; i++)
    {
        if ((n & (1 << i)))
        {
            ans.push_back(1 << i);
        }
    }

    if (k == ans.size())
    {
        cout << "YES" << endl;
        for (auto i : ans)
            cout << i << " ";
        return;
    }

    int j = 0;
    int p = ans.size();
    while (p != k)
    {
        if (ans[j] == 1)
        {
            j++;
            continue;
        }
        ans[j] /= 2;
        ans.push_back(ans[j]);
        p++;
    }

    cout << "YES" << endl;
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    return;
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