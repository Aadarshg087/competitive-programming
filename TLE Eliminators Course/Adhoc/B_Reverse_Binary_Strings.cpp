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
    int n;
    cin >> n;
    string s;
    cin >> s;

    // 101010
    bool w = false;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((!(i & 1) && s[i] == '1') || ((i & 1) && s[i] == '0'))
        {
            w = false;
        }
        else if (!(i & 1) && s[i] == '0')
        {
            if (!w)
                count1++;
            w = true;
        }
        else if ((i & 1) && s[i] == '1')
        {
            if (!w)
                count1++;
            w = true;
        }
    }

    // 01010
    w = false;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (((!(i & 1)) && s[i] == '0') || ((i & 1) && s[i] == '1'))
        {
            w = false;
        }
        else if (!(i & 1) && s[i] == '1')
        {
            if (!w)
                count2++;
            w = true;
        }
        else if ((i & 1) && s[i] == '0')
        {
            if (!w)
                count2++;
            w = true;
        }
    }
    cout << min(count1, count2) << endl;
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