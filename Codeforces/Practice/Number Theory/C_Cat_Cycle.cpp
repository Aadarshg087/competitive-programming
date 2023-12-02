#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    //     cout << 1337 / 67 << endl;
    //     cout << 1337 % 67 << endl;
    if (n % 2 == 0)
    {
        cout << k % n << endl;
        return;
    }
    else
    {
        
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