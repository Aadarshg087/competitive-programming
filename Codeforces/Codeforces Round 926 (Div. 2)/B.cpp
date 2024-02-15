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
    ll n, k;
    cin >> n >> k;
    ll totalD = (4 * n) - 2;
    ll h = totalD / 2;

    if (k == totalD)
    {
        cout << (2 * n) << endl;
        return;
    }
    if (k <= (2 * n))
    {
        if (k & 1)
            cout << (k / 2) + 1 << endl;
        else
            cout << (k / 2) << endl;
    }
    else
    {
        // int newN = n - 2;
        ll ans = n;
        k -= (2 * n);
        // k += 2;
        if (k & 1)
            cout << n + (k / 2) + 1 << endl;
        else
            cout << n + (k / 2) << endl;
    }
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