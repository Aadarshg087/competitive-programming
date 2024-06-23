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
bool check(vector<vector<ll>> &v, int i, int j)
{
    vector<pair<int, int>> c{{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    ll maxi = INT_MIN;
    for (auto it : c)
    {
        int f = it.first + i;
        int s = it.second + j;
        if (f >= 0 && f < v.size() && s >= 0 && s < v[0].size())
        {
            if (v[i][j] <= v[f][s])
            {
                return 0;
            }
        }
        if (f >= 0 && f < v.size() && s >= 0 && s < v[0].size())
        {
            maxi = max(maxi, v[f][s]);
            // debug(maxi);
            // debug(v[f][s]);
        }
    }
    v[i][j] = maxi;
    return 1;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m));
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            // st.insert(v[i][j]);
        }
    }
    // st.erase(st.begin());
    // int second = *st.begin();

    int c = 1;
    while (c == 1)
    {
        c = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (check(v, i, j))
                {
                    // v[i][j]--;
                    c = 1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
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