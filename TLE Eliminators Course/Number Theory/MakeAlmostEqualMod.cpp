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
    bool check = false;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i != 0 && (v[i] & 1) && (v[i - 1] & 1 == 0))
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
    for (int j = 0; j <= 57; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << bitset<8>(v[i]) << endl;
            // x = (x ^ (v[i] & temp));
            if (((v[i] & temp) ^ (v[i + 1] & temp)) == 1)
            {
                // cout << v[i] << endl;
                cout << "YES" << endl;
                cout << temp << endl;
                check = true;
                break;
            }
            // if (x != 0)
            // {
            //     cout << temp << endl;
            //     return;
            // }
        }
        if (check)
            break;
        temp <<= 1;
    }
    temp = temp << 1;
    cout << temp << endl;
    cout << bitset<64>(temp) << endl;
    // cout << "BREAK -------------" << endl;
    // for (int i = 0; i < n; i++)
    // {
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