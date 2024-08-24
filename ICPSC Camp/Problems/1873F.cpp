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
bool check(vector<ll> &a, vector<ll> &h, ll k, ll size)
{
    int n = a.size();
    ll fruitCount = 0;
    ll currSize = 0;
    // print(size);
    for (int i = 0; i < n - 1; i++)
    {
        if (h[i] % h[i + 1] == 0 && fruitCount + a[i] <= k)
        {
            fruitCount += a[i];
            currSize++;
        }
        else
        {
            fruitCount = 0;
            currSize = 0;
        }
        if (currSize + 1 == size && fruitCount <= k)
            return true;
    }
    return false;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    ll low = 0;
    ll high = a.size() + 1;
    ll ans = 0;
    while (low <= high)
    {
        ll mid = (low + high) >> 1;
        if (check(a, h, k, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << ans << endl;
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