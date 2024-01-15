#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    string s, f;
    cin >> s >> f;
    int neededOnes = 0;
    int freeOnes = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' && f[i] == '1')
            neededOnes++;
        if (s[i] == '1' && f[i] == '0')
            freeOnes++;
    }

    cout << max(neededOnes, freeOnes) << endl;
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