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
    ll n, c;
    cin >> n >> c;
    ll cc = c;
    vector<pair<ll, ll>> v(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        int temp;
        cin >> temp;
        v[i] = make_pair(temp, i);
    }
    vector<pair<ll, ll>> vv = v;
    ll i = 1;
    ll ans1 = 0;
    while (i < n + 1)
    {
        if (i < n + 1 && c > 0 && (v[i].first == -1 || v[i].first > c))
        {
            i++;
        }
        if (i < n + 1 && v[i].first != -1 && v[i].first <= (c - v[i].second))
        {
            c -= v[i].second;
            c -= v[i].first;
            ans1++;
            // cout << c << " " << v[i].first << endl;
            v[i].first = -1;
            i = 1;
        }
        else
        {
            i++;
        }
        if (c <= 0)
            break;
    }

    sort(vv.begin(), vv.end());
    ll ans2 = 0;
    i = 1;
    while (i < n + 1)
    {
        // --c;
        if (vv[i].first != -1 && vv[i].first <= (cc - vv[i].second))
        {
            cc -= vv[i].second;
            cc -= vv[i].first;
            ans2++;
            // cout << c << " " << v[i].first << endl;
            vv[i].first = -1;
            i = 1;
        }
        else
        {
            i++;
        }
        if (cc <= 0)
            break;
    }
    // cout << ans1 << " " << ans2 << endl;
    cout << max(ans1, ans2) << endl;
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