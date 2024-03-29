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
    string s;
    cin >> s;
    unordered_set<char> st;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.find(s[i]) == st.end())
        {
            st.insert(s[i]);
            ans += n - i;
        }
    }

    cout << ans << endl;
    return;
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