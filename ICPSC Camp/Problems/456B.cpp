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
    const int mod = 5;
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
    string num;
    cin >> num;
    int res = 1;
    int aa = 4;
    for (int i = 0; i < num.length(); i++)
        res = (res * 10 + num[i] - '0') % aa;
    ll a = 1, b = 1, c = 1, d = 1;
    for (int i = 0; i < res; i++)
    {
        a *= 1;
        b *= 2;
        c *= 3;
        d *= 4;
    }
    cout << (a + b + c + d) % 5 << endl;
    //     string s;
    //     cin >> s;
    //     int n = stoi(s.substr(s.size() - 2, 2));
    //     n %= 5;
    //     int i = 1;
    //     int ans = 0;
    //     while (i <= 4)
    //     {
    //         ans = (ans + BinaryExpoRecur(i, n)) % 5;
    //         i++;
    //     }
    //     cout << ans << endl;
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
    solve();
    // seiveAlgo();
    // int t;
    // cin >> t;
    // while (t--)
    //     solve();
    return 0;
}