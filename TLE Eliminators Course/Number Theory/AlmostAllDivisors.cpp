#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

vector<bool> seiveAlgo(int n)
{
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    ll x = v[0] * v[n - 1];
    vector<ll> div;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            div.push_back(i);
            if (x / i != i)
                div.push_back(x / i);
        }
    }

    sort(div.begin(), div.end());
    if (div == v)
        cout << x << endl;
    else
        cout << -1 << endl;
}

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

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