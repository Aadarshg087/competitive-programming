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

void v1(int a, int b)
{
    if (a == b)
    {
        cout << "Second" << endl;
    }
    else if (a > b)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }
    return;
}

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        if (c & 1)
        {
            cout << "First" << endl;
            return;
        }
        else
        {
            cout << "Second" << endl;
            return;
        }
    }

    if (a > b)
    {
        a = a - b; // Alice ki barri hai!
        b = 0;
        if (c > a)
        {
            c = c - a;
            b = a;
            if (c & 1)
            {
                cout << "First" << endl;
                return;
            }
            else
            {
                cout << "Second" << endl;
                return;
            }
        }
        else
        {
            b = c;
            c = 0;
            v1(a, b);
            return;
        }
    }
    else
    {
        b = b - a;
        a = 0;
        if (c > b)
        {
            c = c - b;
            a = b;
            if (c & 1)
            {
                cout << "First" << endl;
                return;
            }
            else
            {
                cout << "Second" << endl;
                return;
            }
        }
        else
        {
            a = c;
            c = 0;
            v1(a, b);
            return;
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