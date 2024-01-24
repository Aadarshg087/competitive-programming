#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

vector<ll> divisors(ll n)
{
    vector<ll> ans;
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

int lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}
// Doubts
/*
- Why are we usign 1e6 are supposed to 1e4
- 

*/
const int N = 1e6 + 1;
bool seive[N];
void solve()
{

    ll d;
    cin >> d;
    ll ans = 1;
    ll temp = 1 + d;
    for (int i = temp; i <= N; i++)
    {
        if (seive[i])
        {
            ans *= i;
            temp = i;
            break;
        }
    }
    temp += d;
    for (int j = temp; j <= N; j++)
    {
        if (seive[j])
        {
            ans *= j;
            break;
        }
    }
    cout << ans << endl;

    // for (int i = 0; i <= N; i++)
    // {
    //     cout << i << ": " << seive[i] << endl;
    // }

    // My first approach ------------------------------
    // ll d;
    // cin >> d;
    // ll numLCM = 0;
    // vector<ll> v;
    // for (int i = 1; i <= 20; i++)
    // {
    //     ll num1 = i;
    //     ll num2 = num1 + d;
    //     numLCM = lcm(num1, num2);
    //     v = divisors(numLCM);
    //     if (v.size() >= 2)
    //         break;
    // }
    // cout << numLCM << endl;

    // // // checking the divisors
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();

    memset(seive, 1, sizeof(seive));
    for (int i = 2; i * i <= N; i++)
    {
        if (seive[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                seive[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}