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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int m;
    vector<int> LeftToRight(n + 1);
    vector<int> RightToLeft(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int ans = 1;
        if (i == 0)
            ans = 1;
        else
            ans = (abs(v[i] - v[i + 1]) < abs(v[i] - v[i - 1])) ? 1 : abs(v[i] - v[i + 1]);
        LeftToRight[i + 1] = LeftToRight[i] + ans;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        int ans = 1;
        if (i == n - 1)
            ans = 1;
        else
        {
            ans = (abs(v[i] - v[i - 1]) < abs(v[i] - v[i + 1])) ? 1 : abs(v[i] - v[i - 1]);
        }
        RightToLeft[i - 1] = RightToLeft[i] + ans;
    }
    cin >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        int ans = 0;
        if (a < b)
        {
            ans = LeftToRight[b] - LeftToRight[a];
            cout << ans << endl;
            continue;
        }
        else
        {
            ans = RightToLeft[b] - RightToLeft[a];
            cout << ans << endl;
            continue;
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