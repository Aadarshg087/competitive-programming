#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    ll arr[n];
    multimap<ll, ll> p;
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
        // p.insert({v[i], 0});
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = v[i];
    }

    sort(arr, arr + n);
    cout << "dfd" << endl;
    int c = n;
    for (int i = c - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
        p.insert({arr[i], n - 1});
        n = n - 1;
    }
    cout << "hello" << endl;
    for (int i = 0; i < c; i++)
    {
        auto it = p.find(v[i]);
        cout << it->second << " ";
        p.erase(it);
    }

    // sort(vSort.begin(vSort.beign(), vSort.end()));
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