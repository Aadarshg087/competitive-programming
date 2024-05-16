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
// #define double long double
ll __lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(k + 1);
    for (int i = 1; i < k + 1; i++)
        cin >> a[i];
    vector<ll> b(k + 1);
    for (int i = 1; i < k + 1; i++)
        cin >> b[i];

    while (q--)
    {
        ll temp;
        cin >> temp;
        if (temp == 0)
        {
            cout << 0 << " ";
            continue;
        }
        int loc = lower_bound(a.begin(), a.end(), temp) - a.begin();
        // int loc = 1;
        if (a[loc] == temp)
        {
            cout << b[loc] << " ";
            continue;
        }
        loc--;
        ll ans1 = b[loc];
        ll dist = a[loc + 1] - a[loc];
        ll time = b[loc + 1] - b[loc];
        ll ans2 = ((temp - a[loc]) * time) / dist;
        cout << (ll)(ans1 + ans2) << " ";
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