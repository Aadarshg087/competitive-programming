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

set<int> st;
int dp(int n, vector<pair<int, char>> &v, int i, int t)
{
    // Base case
    if (i == v.size())
        return 1;

    // debug(t);
    st.insert(t);
    // Recursive Relation
    int f = v[i].first;
    int s = v[i].second;
    int ans = 0;
    if (s == '?')
    {
        int temp = i - f;
        if (i - f <= 0)
        {
            temp = f - i;
            temp = n - temp;
        }
        // cout << "temp1: " << temp << endl;
        int temp2 = i + f;
        if (i + f > n)
        {
            temp2 = (i + f) % n;
        }
        ans = dp(n, v, i + 1, temp) + dp(n, v, i + 1, temp2);
    }
    else
    {
        if (s == '1')
        {
            int temp = i - f;
            if (i - f <= 0)
            {
                temp = f - i;
                temp = n - temp;
            }
            ans = dp(n, v, i + 1, temp);
        }
        else
        {
            int temp2 = i + f;
            if (i + f > n)
            {
                temp2 = (i + f) % n;
            }

            ans = dp(n, v, i + 1, temp2);
        }
    }

    return ans;
}

// Upsolve
void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<pair<int, char>> v;
    for (int i = 0; i < m; i++)
    {
        int temp1;
        char temp2;
        cin >> temp1 >> temp2;
        v.push_back(make_pair(temp1, temp2));
    }

    dp(n, v, 0, x);
    cout << st.size() << endl;
    for (int i : st)
        cout << i << " ";
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