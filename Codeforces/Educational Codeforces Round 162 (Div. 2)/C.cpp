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
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<ll> repeat(n + 1, 0);
    unordered_map<ll, ll> mp;
    ll maxi = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        mp[v[i]]++;
        if (mp[v[i]] == 1 && repeat[i - 1] == 0)
            continue;

        maxi = max(maxi, max(mp[v[i]], repeat[i - 1]));
        // int ans = max(maxi, repeat[i - 1]);
        cout << maxi << endl;
        repeat[i] = maxi;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << repeat[i] << " ";
    }
    cout << endl;

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        // if (l == r)
        // {
        //     cout << "NO" << endl;
        //     continue;
        // }
        int total = r - l + 1;
        if ((repeat[r] - repeat[l - 1]) > total / 2)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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