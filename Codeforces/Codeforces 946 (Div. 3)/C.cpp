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

ll check(vector<int> &v, int i)
{
    int n = v.size();
    ll ans = 0;
    int a = v[i - 1];
    int b = v[i];
    int c = v[i + 1];
    while (i + 2 < n)
    {
        // cout << i << " " << endl;
        if (a == v[i] && b == v[i + 1] && c != v[i + 2])
        {
            ans++;
        }
        else if (a == v[i] && b != v[i + 1] && c == v[i + 2])
        {
            ans++;
        }
        else if (a != v[i] && b == v[i + 1] && c == v[i + 2])
        {
            ans++;
        }
        i++;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = 0;
    int i = 0;
    while (i < n - 2)
    {
        ans += check(v, i + 1);
        i++;
    }
    cout << ans << endl;
    // vector<vector<int>> vv;
    // for (int i = 0; i < n - 2; i++)
    // {
    //     vector<int> temp;
    //     temp.push_back(v[i]);
    //     temp.push_back(v[i + 1]);
    //     temp.push_back(v[i + 2]);
    //     vv.push_back(temp);
    // }
    // int t = 3;
    // // vector<vector<int>> bb(vv.size(), vector<int>(3, 0));
    // // sort(vv.begin(), vv.end());
    // // ll ans = 0;
    // for (int i = 0; i < vv.size() - 1; i++)
    // {
    // }
    // cout << ans << endl;
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