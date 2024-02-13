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

ll count1 = 0;
void solve(vector<ll> &v, ll n, ll i, ll check, ll sum, ll x, ll y)
{
    if (i >= n)
        return;

    // Recursive Solution
    if (check == 0)
        solve(v, n, i + 1, 1, v[i], x, y);
    solve(v, n, i + 1, check, sum, x, y);
    if (check == 1)
    {
        ll temp1 = sum + v[i];
        ll temp2 = abs(sum - v[i]);
        if (temp1 % x == 0 && temp2 % y == 0)
            count1++;
        return;
    }
}
void solve()
{
    ll n;
    ll x, y;
    cin >> n;
    cin >> x >> y;
    vector<ll> v(n);
    ll maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v[i] = temp;
    }

    solve(v, n, 0, 0, 0, x, y);
    cout << count1 << endl;
    count1 = 0;
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
    // seiveAlgo();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}