#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

const int N = 1e6 + 7;
vector<bool> isPrime(N, true);
void seiveAlgo()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
void solve()
{
    ll a, b, l;
    cin >> a >> b >> l;
    ll a1 = 1;
    unordered_set<ll> st;
    while (a1 <= l)
    {
        ll b1 = 1;
        while (b1 <= l)
        {
            // cout << a1 << " " << b1 << endl;
            ll temp = a1 * b1;
            if (temp > l)
                break;
            ll k;
            if (l % temp == 0)
                k = l / temp;
            // cout << k << " " << a1 << " " << b1 << endl;
            st.insert(k);
            if (b1 == 1)
            {
                // cout << "sdfsdsdfd is called" << endl;
                b1 = b;
            }
            else
            {
                b1 *= b;
                // cout << b1 << endl;
            }
        }
        if (a1 == 1)
            a1 = a;
        else
            a1 *= a;
    }
    cout << st.size() << endl;
}

/*
    - Read the problem twice
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
    // seiveAlgo();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}