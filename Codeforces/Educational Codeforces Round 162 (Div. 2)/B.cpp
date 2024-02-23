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
    vector<vector<ll>> v(n, vector<ll>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i][0] = abs(a);
    }

    sort(v.begin(), v.end());

    // int maxi = v[v.size() - 1][0];
    while (i < n)
    {
        int temp = k;
        if (v[i][1] <= temp)
        {
            temp -= v[i][1];
            v[i][1] = 0;
        }
        else
        {
            v[i][1] -= temp;
            continue;
        }

        

    }

    // vector<ll> diff(2 * n);
    // for (int i = 0; i < 2 * n; i++)
    // {
    //     diff[i] = abs(position[i]);
    // }
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