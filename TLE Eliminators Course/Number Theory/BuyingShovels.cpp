#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

vector<ll> divisors(ll n, ll k)
{
    // finding the divsors less than k
    vector<ll> ans;
    ll temp = min(n, k);
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i <= k)
            {
                ans.push_back(i);
                if (n / i != i)
                {
                    if (n / i <= k)
                        ans.push_back(n / i);
                }
            }
        }
    }
    if (n <= k)
        ans.push_back(n);

    // debug
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // cout << endl;

    return ans;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v = divisors(n, k);
    v.push_back(1);
    // sorting the divisors from large to small
    sort(v.begin(), v.end(), greater<ll>());
    // cout << v.front() << endl;
    cout << n / v.front() << endl;
}

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