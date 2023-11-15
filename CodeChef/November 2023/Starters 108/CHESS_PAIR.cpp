#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n, rated;
    cin >> n >> rated;
    int totalPlayers = 2 * n;
    int unRated = totalPlayers - rated;
    if (rated > unRated)
    {
        cout << rated - unRated << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}