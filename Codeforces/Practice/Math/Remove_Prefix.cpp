#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty() == true)
            s.insert(arr[i]);
        else if ((s.find(arr[i]) != s.end()))
        {
            break;
        }
        else
        {
            s.insert(arr[i]);
        }
    }

    // for (auto i : s)
    //     cout << i << " ";
    // cout << endl;
    cout << n - s.size() << endl;
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