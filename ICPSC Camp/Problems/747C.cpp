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

void allot(vector<int> &v, int s)
{
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        // v[i] = 1;
        if (v[i] != 1)
        {
            sum += i + 1;
            v[i] = 1;
        }
    }
    cout << sum << endl;
    return;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n, 0);
    int prev = -1;
    int avail = n;
    while (q--)
    {
        int s, ser, t;
        cin >> s >> ser >> t;
        if ((s > prev && ser <= avail))
        {
            prev = s + t - 1;
            // v.clear();
            vector<int> temp(n, 0);
            v = temp;
            allot(v, ser);
            avail = avail + ser;
        }
        else if (ser <= avail)
        {
            // prev = s + t - 1;
            allot(v, ser);
            avail = avail - ser;
        }
        else
        {
            cout << -1 << endl;
        }
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