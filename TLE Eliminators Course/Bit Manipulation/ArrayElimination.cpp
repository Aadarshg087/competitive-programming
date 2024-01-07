#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> validK(n + 1, 1);
    for (int i = 0; i <= 30; i++)
    {
        int count = 0;
        vector<int> validFactors(n + 1);
        for (int j = 0; j < n; j++)
        {
            if (v[j] & (1 << i))
            {
                count++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (count % i == 0)
            {
                validFactors[i] = 1;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            validK[i] = validFactors[i] & validK[i];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (validK[i] == 1)
        {
            cout << i << " ";
        }
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