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

void fill(vector<vector<int>> &v, int x, int y)
{
    while (1)
    {
        bool c = 0;
        if (y < v[0].size() && y >= 0)
        {
            cout << x << " " << y << " ";
            v[x][y] = 1;
            if (c)
                y--;
            else
                y++;
        }
        else
        {
            x++;
            if (y == v[0].size())
            {
                c = 1;
                y = v[0].size() - 1;
            }
            else
            {
                c = 0;
                y = 0;
            }
        }

        if (x == v.size() - 1 && y == 0 && v[v.size() - 1][v[0].size() - 1] == 1)
            break;
        if (x == v.size() - 1 && y == v[0].size() - 1 && v[v.size() - 1][0] == 1)
            break;
    }
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int total = n * m;
    int temp = total / 2;
    vector<vector<int>> v(4, vector<int>(5, 0));
    cout << v.size() << " " << v[0].size() << endl;
    return;

    int i = 1;
    int x = 0, y = 0;
    while (i <= k)
    {
        if (i == k)
        {
            cout << n * m - 2 * (k - 1) << " ";
            fill(v, x, y);
            break;
        }
        cout << 2 << " ";
        cout << x << " " << y << " " << x + 1 << " " << y << endl;
        v[x][y] = 1;
        v[x + 1][y] = 1;
        y++;
        if (y == m)
        {
            x += 2;
            y = 0;
        }
        else
            x = 0;
        i++;
    }
    cout << endl;

    for (vector<int> v1 : v)
    {
        for (int i : v1)
            cout << i << " ";
        cout << endl;
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
    solve();
    // seiveAlgo();
    // int t;
    // cin >> t;
    // while (t--)
    //     solve();
    return 0;
}