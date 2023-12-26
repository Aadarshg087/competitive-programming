#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    unordered_set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        s.insert(element);
    }

    int temp;
    for (int i = 1; i < 1024; i++)
    {
        auto j = s.begin();
        for (j = s.begin(); j != s.end(); j++)
        {
            temp = ((*j) ^ i);
            if (s.find(temp) == s.end())
            {
                break;
            }
        }
        if (j == s.end())
        {
            cout << i << endl; 
            return;
        }
    }
    cout << -1 << endl;
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