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
    string s;
    cin >> s;
    int e = 0;
    int o = 0;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] & 1)
            o++;
        else
            e++;
    }
    int i = n - 1;
    string ans = "";
    if (o & 1)
    {
        while (i >= 0)
        {
            if (s[i] & 1)
            {
                ans += s.substr(0, i);
                ans += (i + 1 < n) ? s.substr(i + 1) : "";
                s = ans;
                break;
                // cout << ans << endl;
                // return;
            }
            else
                i--;
        }
    }
    // cout << s << endl;
    i = s.size() - 1;
    while (i >= 0)
    {
        if (!(s[i] & 1))
        {
            s.pop_back();
            e--;
            i--;
        }
        else
            break;
    }
    if (i < 0)
    {
        cout << -1 << endl;
        return;
    }

    i = n - 1;

    // cout << s << endl;
    i = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
            break;
    }
    if (i != s.size())
    {
        s = s.substr(i);
        cout << s << endl;
    }
    else
    {
        cout << -1 << endl;
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