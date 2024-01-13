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
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++)
    {
        int o;
        string s;
        cin >> o >> s;
        v.push_back(make_pair(o, s));
    }

    sort(v.begin(), v.end());

    bool f = false;
    bool s = false;
    int ans = 0;
    int finalAns = INT_MAX;
    int i;
    for (i = 0; i < n; i++)
    {
        if (v[i].second == "01" && f == false)
        {
            ans += v[i].first;
            f = true;
        }

        if (v[i].second == "10" && s == false)
        {
            ans += v[i].first;
            s = true;
        }

        if (v[i].second == "11")
        {
            finalAns = v[i].first;
            if (s == 1 && f == 1)
            {
                break;
            }
            else
            {
                cout << finalAns << endl;
                return;
            }
        }
    }
    if (s == 1 && f == 1)
    {
        cout << min(finalAns, ans) << endl;
        return;
    }
    cout << -1 << endl;
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