#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"
vector<int> findDivisors(int n)
{
    vector<int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (n / i != i)
                ans.push_back(n / i);
        }
    }
    return ans;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

void solve()
{
    ll n;
    cin >> n;
    vector<int> divisors = findDivisors(n);
    ll a = 1;
    ll b = n - 1;
    ll ans = lcm(a, b);
    for (int i = 0; i < divisors.size(); i++)
    {

        ll tempa = divisors[i];
        ll tempb = n - divisors[i];
        ll tempans = lcm(tempa, tempb);
        if (tempans < ans)
        {
            ans = tempans;
            a = tempa;
            b = tempb;
        }
    }

    cout << a << " " << b << endl;
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