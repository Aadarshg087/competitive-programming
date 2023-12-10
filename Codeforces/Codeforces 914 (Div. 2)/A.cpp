#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int a, b;
    cin >> a >> b;
    int k1, k2;
    cin >> k1 >> k2;
    int q1, q2;
    cin >> q1 >> q2;
    set<pair<int, int>> s1;
    set<pair<int, int>> s2;

    s1.insert({k1 + a, k2 + b});
    s1.insert({k1 - a, k2 - b});
    s1.insert({k1 + a, k2 - b});
    s1.insert({k1 - a, k2 + b});

    s1.insert({k1 + b, k2 + a});
    s1.insert({k1 - b, k2 - a});
    s1.insert({k1 + b, k2 - a});
    s1.insert({k1 - b, k2 + a});

    s2.insert({q1 + a, q2 + b});
    s2.insert({q1 - a, q2 - b});
    s2.insert({q1 + a, q2 - b});
    s2.insert({q1 - a, q2 + b});

    s2.insert({q1 + b, q2 + a});
    s2.insert({q1 - b, q2 - a});
    s2.insert({q1 + b, q2 - a});
    s2.insert({q1 - b, q2 + a});
    int count = 0;
    for (auto i = s1.begin(); i != s1.end(); i++)
    {
        if (s2.find({i->first, i->second}) != s2.end())
        {
            count++;
        }
    }
    cout << count << endl;
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