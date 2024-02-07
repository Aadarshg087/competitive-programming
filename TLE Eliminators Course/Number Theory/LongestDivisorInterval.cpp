#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

vector<bool> seiveAlgo(int n)
{
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

vector<ll> divisors(ll n)
{

    vector<ll> ans;
    for (int i = 1; i * i <= n; i++)
    {
        cout << "YES " << i << endl;
        if (n % i == 0)
        {
            ans.push_back(i);
            if (n / i != i)
            {
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    ll count = 0;
    if (n == 2)
    {
        cout << 2 << endl;
        return;
    }

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        else
            break;
    }

    ll count1 = 0;
    for (ll i = n / 2; i > 0; i--)
    {
        if (n % i == 0)
        {
            count1++;
        }
        else
            break;
    }
    cout << max(count, count1) << endl;
    // cout << count << endl;
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}