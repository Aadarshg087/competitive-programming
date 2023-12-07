#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    multiset<ll, greater<ll>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp.insert(arr[i]);
    }
    auto largest = mp.begin();
    auto temp = mp.begin();
    auto Slargest = ++temp;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != *largest)
        {
            cout << arr[i] - *largest << " ";
        }
        else
        {
            cout << arr[i] - *Slargest << " ";
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