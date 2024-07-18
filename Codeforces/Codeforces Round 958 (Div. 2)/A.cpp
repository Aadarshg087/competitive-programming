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
// int tt[100100];
int t[100100];
int solve2(int n, int k)
{
    // base case
    // print(n);

    if (n == 0 || n == 1)
        return 0;
    if (n < k)
        return 1 + solve2(1, k);
    // recurrence relation
    int a = 1 + solve2(n - (k - 1), k);
    return a;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    // memset(tt, -1, sizeof(tt));
    memset(t, -1, sizeof(t));
    cout << solve2(n, k) << endl;
    // multiset<int, greater<int>> mt;
    // mt.insert(n);
    // int count = 0;
    // vector<int> v(n + 1, 0);
    // while (*mt.begin() != 1)
    // {
    //     int maxi = *mt.begin();
    //     if (maxi == 1)
    //         break;
    //     mt.erase(mt.begin());
    //     int temp = maxi / k;
    //     if (temp == 0)
    //     {
    //         mt.
    //     }
    //     else
    //     {
    //     }
    // }
    // cout << count << endl;
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