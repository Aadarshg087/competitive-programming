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
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    long double m = sqrt(sum);
    long double ans = m * m;
    if (ans == sum)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    // ll n1 = sqrt(sum);
    // if (m > n1)
    // {
    //     cout << "NO" << endl;
    // }
    // else
    //     cout << "YES" << endl;
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