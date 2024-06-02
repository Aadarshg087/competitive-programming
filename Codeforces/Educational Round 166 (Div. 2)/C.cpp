#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ------------------------ Macros -------------------------
#define ll long long int
#define endl "\n"

#define debug(x)        \
    cout << #x << ": "; \
    _print(x);          \
    cout << endl;

// ---------------------- Debug Functions -------------------------
template <class T>
void _print(T x)
{
    cout << x << " ";
}
template <class T>
void _print(vector<T> v)
{
    for (T i : v)
        _print(i);
}

// Seive Algo -------------------
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

// Binary Exponentiation - (Check MOD Value) -------------------
ll BinaryExpoRecur(ll a, ll p)
{
    const int mod = 1e9 + 7;
    if (p == 1)
        return a;
    ll ans = BinaryExpoRecur(a, p / 2);
    if (p & 1)
    {
        return (((ans * ans) % mod) * a) % mod;
    }
    else
    {
        return (ans * ans) % mod;
    }
    return ans;
}

// One side divisors (1 included, sorted) -------------------
set<ll> divisor(ll n)
{
    set<ll> st;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            st.insert(n / i);
        }
    }
    return st;
}

ll __lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> v1(n + m + 1); // programmer
    vector<ll> v2(n + m + 1); // tester
    for (int i = 0; i < n + m + 1; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n + m + 1; i++)
        cin >> v2[i];

    vector<ll> temp(n + m + 1);
    for (int i = 0; i < n + m + 1; i++)
    {
        // 1 programmer
        // 2 tester
        if (v1[i] > v2[i])
        {
            temp[i] = 1;
        }
        else
            temp[i] = 2;
    }
    int nn = n;
    int mm = m;
    int skip = 0;
    vector<ll> temp2(n + m);
    ll sum = 0;
    for (int i = 0; i < n + m + 1; i++)
    {
        if (temp[i] == 1)
        {
            sum += v1[i];
        }
        else
        {
            sum += v2[i];
        }
    }

    ll tsum = sum;
    skip = 0;
    while (skip < n + m + 1)
    {
        tsum = sum;
        cout << "sum: " << sum << endl;
        if (temp[skip] == 1)
        {
            tsum -= v1[skip];
        }
        else
        {
            tsum -= v1[skip];
        }
        cout << tsum << " ";
        skip++;
    }
    cout << endl;
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
        solve();
    return 0;
}