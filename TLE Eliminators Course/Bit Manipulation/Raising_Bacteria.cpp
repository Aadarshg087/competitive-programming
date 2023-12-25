#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int x;
    cin >> x;
    //  ---- My approach ----------------
    // int count = 1;
    // while (x != 0)
    // {
    //     if ((x & 1) == 1 && x != 1)
    //         count++;
    //     x = (x >> 1);
    //     // cout << x << endl;
    // }
    // cout << count << endl;
    // cout << bitset<32>(101) << endl;

    // Also in short, we need to count the set bits -----------
    // ---- Brian Kerningam's Algo --------------------
    // int res = 0;
    // while (x > 0)
    // {
    //     x = (x & (x - 1));
    //     res++;
    // }
    // cout << res << endl;

    // --------- OR --------------
    cout << __builtin_popcountll(x) << endl;
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