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

bool check(ll mid, vector<ll> &v, ll x, ll y, ll a, ll b, ll k)
{
    ll countlcm = mid / __lcm(a, b);
    ll countA = mid / a - countlcm;
    ll countB = mid / b - countlcm;

    ll i = 0;
    ll money = 0;
    while (countlcm--)
        money += v[i++] / 100 * (x + y);

    while (countA--)
        money += v[i++] / 100 * (x);

    while (countB--)
        money += v[i++] / 100 * (y);

    return money >= k;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll x, y, a, b;
    cin >> x >> a >> y >> b;
    ll k;
    cin >> k;
    if (x < y)
    {
        swap(x, y);
        swap(a, b);
    }
    sort(all(v), greater<ll>());
    ll low = 0;
    ll high = n;
    ll ans = -1;
    while (low <= high)
    {
        ll mid = (low + high) >> 1;
        if (check(mid, v, x, y, a, b, k))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
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