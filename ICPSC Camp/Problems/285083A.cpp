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

bool check(vector<pair<double, double>> &people, double time)
{
    pair<double, double> curr = {-1e9, 1e9};
    for (auto it : people)
    {
        auto point = it.first;
        auto speed = it.second;
        curr = {max(curr.first, point - speed * time), min(curr.second, point + speed * time)};
    }
    if (curr.first <= curr.second)
        return 1;
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<double, double>> people(n);
    for (int i = 0; i < n; i++)
    {
        double t1, t2;
        cin >> t1 >> t2;
        people[i] = {t1, t2};
    }

    double low = 0;
    double high = 1e9;
    double ans = 0;
    double error = 1e-6;
    for (int i = 0; i < 60; i++)
    {
        double mid = (low + high) / 2;
        if (check(people, mid))
        {
            ans = mid;
            high = mid - error;
        }
        else
            low = mid + error;
    }

    cout << setprecision(6) << fixed << ans << endl;
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