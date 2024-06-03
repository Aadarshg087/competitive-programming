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

bool check(int x, vector<ll> &v)
{
    ll last = 0;
    vector<ll> temp;
    for (int i = 0; i < v.size(); i++)
    {
        if (i == x)
            continue;
        else
        {
            temp.push_back(v[i]);
        }
    }
    // for (ll i : temp)
    //     cout << i << " ";
    // cout << endl;

    for (int i = 0; i < temp.size() - 1; i++)
    {
        ll t = __gcd(temp[i], temp[i + 1]);
        // cout << t << " ";
        if (last != 0 && t < last)
            return false;
        last = t;
    }
    // cout << endl;

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

    if (check(0, v))
    {
        cout << "YES" << endl;
        return;
    }
    else if (check(n - 1, v))
    {
        cout << "YES" << endl;
        return;
    }

    ll loc = -1;
    int last = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll t = __gcd(v[i], v[i + 1]);
        if (last != 0 && t < last)
        {
            loc = i;
            break;
        }
        last = t;
    }
    // cout << loc << endl;

    check(loc, v);

    if (loc != -1 && (check(loc - 1, v) || check(loc, v) || check(loc + 1, v)))
    {
        cout << "YES" << endl;
    }
    else if (loc == -1)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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