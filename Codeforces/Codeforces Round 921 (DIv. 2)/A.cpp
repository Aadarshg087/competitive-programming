#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

vector<ll> divisors(ll n)
{
    vector<ll> ans;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if (n / i != i)
                ans.push_back(n / i);
        }
    }
    ans.push_back(n);
    return ans;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s = string(1, 'a');
    for (int i = 1; i < k; i++)
    {
        char temp = s[s.size() - 1] + 1;
        s += temp;
    }
    // if (k > n)
    // {
    //     cout << s << endl;
    //     return;
    // }
    string temp = s;
    string res = "";
    for (int i = 1; i < n; i++)
    {
        s += temp;
    }
    cout << s << endl;
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