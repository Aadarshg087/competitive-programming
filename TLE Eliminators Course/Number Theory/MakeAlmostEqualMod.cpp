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
    // int i = 3;
    // int j = 6;
    // int t = 1;
    // if (((i & t) ^ (j & t)) == 1)
    //     cout << "YES" << endl;

    ll n;
    cin >> n;
    vector<ll> v(n);
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i != 0 && (v[i] & 1) && (v[i] & 1 == 0))
        {
            check = true;
        }
    }

    if (check)
    {
        cout << 2 << endl;
        return;
    }

    ll temp = 1;
    for (int i = 0; i <= 57; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (((v[j] & temp) ^ (v[j + 1] & temp)) == 1)
            {
                // cout << "YES" << endl;
                check = true;
                break;
            }
        }
        if (check)
            break;
        temp <<= 1;
    }
    temp <<= 1;

    cout << temp << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << bitset<8>(v[i]) << endl;
    //     cout << v[i] % temp << endl;
    // }
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