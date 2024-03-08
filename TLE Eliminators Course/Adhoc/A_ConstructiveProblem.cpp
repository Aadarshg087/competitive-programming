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

// Seive Algo ----------------------------------------------------
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

int mex(vector<int> v)
{
    set<int> st;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        st.insert(v[i]);
    }
    int o = 0;
    for (int i : st)
    {
        if (i != o)
            return o;
    }
    return st.size();
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int m = mex(v); // current mex
    int m1 = m + 1; // we have to remove these values and make to sure to exist all the values below it

    int f = -1, s = -1;
    // Case 1 - if we found the m1, then we could find range and update that's it
    // Case 2 - it we didn't found the m1, then,
    for (int i = 0; i < n; i++)
    {
        if (m1 >= v[i])
        {
            f = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (m1 >= v[i])
        {
            s = i;
            break;
        }
    }
    // if (f == -1 || s == -1)
    // {
    //     cout << "No" << endl;
    //     return;
    // }

    for (int i = f; i <= s; i++)
    {
        v[i] = m;
    }

    cout << ((mex(v) == m1) ? "Yes" : "No") << endl;
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