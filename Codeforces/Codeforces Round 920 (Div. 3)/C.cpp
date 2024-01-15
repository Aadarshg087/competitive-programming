#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    ll n, initialCharge, ChargePerUnit, OnOff;
    cin >> n >> initialCharge >> ChargePerUnit >> OnOff;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = v[0] - 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += v[i + 1] - v[i];
    }
    // cout << sum << endl;

    if (sum < initialCharge)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

// void solve()
// {
//     ll n, initialCharge, ChargePerUnit, OnOff;
//     cin >> n >> initialCharge >> ChargePerUnit >> OnOff;
//     vector<ll> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     if (n == 1)
//     {
//         if (initialCharge > v[0])
//         {
//             cout << "YES" << endl;
//             return;
//         }
//         cout << "NO" << endl;
//         return;
//     }

//     ll diff = abs(0 - v[0]);
//     ll drop = diff * ChargePerUnit;
//     if (drop < OnOff)
//     {
//         initialCharge -= drop;
//         // cout << initialCharge << endl;
//     }
//     else
//     {
//         initialCharge -= OnOff;
//     }

//     if (initialCharge <= 0)
//     {
//         cout << "NO" << endl;
//         return;
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         diff = abs(v[i] - v[i + 1]);

//         drop = diff * ChargePerUnit;
//         if (drop < OnOff)
//         {
//             initialCharge -= drop;
//             // cout << initialCharge << endl;
//         }
//         else
//         {
//             initialCharge -= OnOff;
//         }

//         if (initialCharge <= 0)
//         {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }

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