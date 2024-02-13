#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

const int N = 1e6 + 7;
vector<bool> isPrime(N, true);

vector<ll> primeDivisor(int n)
{
    vector<ll> ans;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            ans.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        ans.push_back(n);
    return ans;
}
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

vector<ll> divisor(ll n)
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
    ll n;
    cin >> n;
    vector<ll> div = primeDivisor(n);
    unordered_map<int, int> mp;
    int maxi = 0;
    for (auto i : div)
    {
        mp[i]++;
        maxi = max(maxi, mp[i]);
    }
    int product = 0;
    for (int i = 0; i < maxi; i++)
    {
        int temp = 1;
        for (auto &i : mp)
        {
            if (i.second == 0)
                continue;
            temp *= i.first;
            i.second--;
        }
        product += temp;
    }

    cout << product << endl;
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