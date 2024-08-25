#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ------------------------ Macros -------------------------
#define ll long long int
#define endl "\n"

#define all(v) begin(v), end(v)
#define print(x)        \
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

ll f(vector<vector<int>> &v, int i)
{
}

ll mex(vector<ll> &v)
{
    int num = 0;
    set<ll> st(all(v));
    bool c = 0;
    for (auto &i : st)
    {
        if (i != num)
        {
            return num;
        }
        num++;
    }
    return num;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n);
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string t;
        getline(cin, t);
        stringstream ss(t);
        ll num;
        while (ss >> num)
        {
            v[i].push_back(num);
        }
    }
    // for (auto it : v)
    // {
    //     for (auto i : it)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
    ll x = 0;
    int maxInd = 0;
    for (int i = 0; i < n; i++)
    {
        vector<ll> tt(v[i].begin() + 1, v[i].end());
        tt.push_back(x);
        ll m = mex(tt);
        if (m > x)
        {
            maxInd = i;
            x = m;
        }
    }
    cout << x << endl;
    ll maxi = *max_element(v[maxInd].begin() + 1, v[maxInd].end());
    while (x != maxi + 1)
    {
        vector<ll> tt(v[maxInd].begin() + 1, v[maxInd].end());
        tt.push_back(x);
        x = mex(tt);
        cout << x << endl;
    }
    cout << x << endl;
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