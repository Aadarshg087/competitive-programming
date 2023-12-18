#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

string createString(string s, int n, int i)
{
    if (i == n)
        return;

    string s1 = createString(s.substr(1), n - 1, i + 1);
    string s2 = s[0] + createString(s.substr(1), n - 1, i + 1);
    
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    createString(s, n, 0);
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