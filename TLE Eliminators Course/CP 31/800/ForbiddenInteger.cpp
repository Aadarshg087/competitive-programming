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
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES" << endl;
        vector<int> v(n, 1);
        cout << v.size() << endl;
        for (int i : v)
            cout << i << " ";
        cout << endl;
        return;
    }
    ll sum = 0;
    if (n % 2 == 0 && k >= 2)
    {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        int i = 2;
        while (i <= n)
        {
            cout << 2 << " ";
            i += 2;
            sum += 2;
        }
        // cout << sum << endl;
        return;
    }
    else if (k >= 3)
    {
        cout << "YES" << endl;
        int temp = n / 2;
        cout << temp << endl;
        for (int i = 1; i <= temp - 1; i++)
        {
            cout << 2 << " ";
            sum += 2;
        }
        cout << 3 << endl;
        // cout << sum << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
    }
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