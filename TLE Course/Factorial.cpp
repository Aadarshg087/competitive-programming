#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl '\n'

ll fact(ll n)
{
    if (n == 1)
        return 1;

    ll ans = n * fact(n - 1);
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    cout << fact(n) << endl;
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