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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> needed(n, 0);
    for (int j = 0; j < 30; j++)
    {
        bool found = 0;
        for (int i = 0; i < n; i++)
        {
            if ((v[i] & (1 << j)) && found == 0)
                found = 1;
            else if (found && (v[i] & (1 << j)) == 0)
            {
                needed[i] += (1 << j);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << needed[i] << " ";
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