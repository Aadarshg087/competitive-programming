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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> pre(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i != n - 1 && v[i - 1] < v[i] && v[i] > v[i + 1])
        {
            pre[i] = 1;
        }
    }
    int p = 0;
    int start = 0;
    for (int i = 0; i < k; i++)
    {
        if (i + 1 < k && i > 0)
        {
            if (v[i - 1] < v[i] && v[i + 1] < v[i])
            {
                p++;
                start = 0;
            }
        }
    }

    int ans = p;
    for (int i = k; i < n; i++)
    {
        // if (i - k != 0 && v[i - k - 1] < v[i - k] && v[i - k + 1] < v[i - k])
        //     p--; // removing i - k element
        if (v[i - k + 1] > v[i - k + 2] && v[i - k + 1] > v[i - k])
            p--;

        // if (pre[i - k])
        //     p--;

        // if (pre[i - k + 1])
        //     p--;

        if (v[i - 1] > v[i - 2] && v[i - 1] > v[i])
        {
            p++; // checking whether the new v[i - 1] is peak ?
            if (p > ans)
            {
                ans = max(ans, p);
                start = i - k + 1; // updation
            }
        }
    }
    cout << ans + 1 << " " << start + 1 << endl; // 1 based indexing
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