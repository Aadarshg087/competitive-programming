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

bool check(vector<ll> v, ll mid)
{
    int n = v.size();
    // can we make all the elemnt >= mid

    // cout << mid << " ";
    // print(v);
    vector<ll> temp = v;
    for (int i = n - 1; i >= 2; i--)
    {
        if (v[i] - mid < 0)
            return false;
        ll d = min(v[i] - mid, temp[i]) / 3; // to keep atleast mid number
        v[i - 1] += d;
        v[i - 2] += 2 * d;
        v[i] -= 3 * d;
    }
    // print(v);
    for (int i = 0; i < n; i++)
    {
        if (v[i] < mid)
            return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll low = 1;
    ll high = 1e9 + 7;
    ll ans = 0;
    while (low <= high)
    {
        ll mid = (low + high) >> 1;
        if (check(v, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << ans << endl;
}
// ll mini = *min_element(all(v));
// vector<ll> temp(n, 0);
// for (int i = 0; i < n; i++)
// {
//     if (v[i] == mini)
//         temp[i]++;
// }

// for (int i = 2; i < n; i++)
// {
//     if (temp[i] != 1)
//     {
//         ll d = v[i] / 3;
//         v[i - 1] += d;
//         v[i - 2] += 2 * d;
//         v[i] -= 3 * d;
//     }
// }

// ll ans = 0;
// for (int i = 0; i < n; i++)
// {
//     if (temp[i])
//         ans = min(ans, v[i]);
// }
// cout << ans << endl;
// }

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