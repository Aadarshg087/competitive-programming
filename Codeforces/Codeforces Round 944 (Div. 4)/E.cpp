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
    int n, q, k;
    cin >> n >> k >> q;
    vector<float> a(k + 1); // signs
    for (int i = 1; i < k + 1; i++)
        cin >> a[i];
    vector<float> b(k + 1); // time to reach at station
    for (int i = 1; i < k + 1; i++)
        cin >> b[i];

    vector<double> pre(n + 1);
    for (int i = 1; i < k + 1; i++)
    {
        pre[b[i]] = (double)1 / (round((double)(a[i] - a[i - 1]) / (b[i] - b[i - 1])));
        cout << (double)1 / (round((double)(a[i] - a[i - 1]) / (b[i] - b[i - 1])))
             << endl;
    }
    for (auto i : pre)
        cout << i << " ";
    vector<double> temp(n + 1);
    double t = 0;
    for (int i = n; i > 0; i--)
    {
        if (pre[i] == 0)
        {
            temp[i] = t;
        }
        else
        {
            t = pre[i];
            temp[i] = t;
        }
    }
    cout << endl;

    for (auto i : temp)
        cout << i << " ";

    vector<double> ans(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        ans[i] = ans[i - 1] + temp[i];
    }
    cout << endl;
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    while (q--)
    {
        int p;
        cin >> p;
        cout << (int)ans[p] << " ";
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