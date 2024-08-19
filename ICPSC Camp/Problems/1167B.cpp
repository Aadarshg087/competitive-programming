#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ------------------------ Macros -------------------------
#define ll long long int
// #define endl "\n"

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

void solve()
{
    int n;
    n = 6;
    vector<int> v{4, 8, 15, 16, 23, 42};
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // cout << v[i] * v[j] << endl;
            mp[v[i] * v[j]].push_back(v[i]);
            mp[v[i] * v[j]].push_back(v[j]);
        }
    }
    vector<int> ans(n + 1);
    int nn = 1;
    while (nn--)
    {
        cout << "? " << 1 << " " << 2 << endl;
        int temp1;
        cin >> temp1;
        vector<int> t;
        set<int> st;
        t.push_back(mp[temp1][0]);
        t.push_back(mp[temp1][1]);
        int f = 0;
        if (st.find(mp[temp1][0]) != st.end())
            f = mp[temp1][0];
        else
            st.insert(mp[temp1][0]);

        if (st.find(mp[temp1][1]) != st.end())
            f = mp[temp1][1];
        else
            st.insert(mp[temp1][1]);

        cout << "? " << 1 << " " << 3 << endl;
        int temp2;
        cin >> temp2;
        t.push_back(mp[temp2][0]);
        t.push_back(mp[temp2][1]);
        if (st.find(mp[temp2][0]) != st.end())
            f = mp[temp2][0];
        else
            st.insert(mp[temp2][0]);

        if (st.find(mp[temp2][1]) != st.end())
            f = mp[temp2][1];
        else
            st.insert(mp[temp2][1]);
        ans[1] = f;
        int o = 2;
        for (int i : mp[temp1])
        {
            if (i != f)
            {
                ans[o++] = i;
            }
        }
        for (int i : mp[temp2])
        {
            if (i != f)
            {
                ans[o++] = i;
            }
        }
    }

    nn = 1;
    while (nn--)
    {
        cout << "? " << 4 << " " << 5 << endl;
        int temp1;
        cin >> temp1;
        vector<int> t;
        set<int> st;
        int f = 0;
        t.push_back(mp[temp1][0]);
        t.push_back(mp[temp1][1]);
        if (st.find(mp[temp1][0]) != st.end())
            f = mp[temp1][0];
        else
            st.insert(mp[temp1][0]);

        if (st.find(mp[temp1][1]) != st.end())
            f = mp[temp1][1];
        else
            st.insert(mp[temp1][1]);

        cout << "? " << 4 << " " << 6 << endl;
        int temp2;
        cin >> temp2;
        t.push_back(mp[temp2][0]);
        t.push_back(mp[temp2][1]);
        if (st.find(mp[temp2][0]) != st.end())
            f = mp[temp2][0];
        else
            st.insert(mp[temp2][0]);

        if (st.find(mp[temp2][1]) != st.end())
            f = mp[temp2][1];
        else
            st.insert(mp[temp2][1]);
        ans[4] = f;
        int o = 5;
        for (int i : mp[temp1])
        {
            if (i != f)
            {
                ans[o++] = i;
            }
        }
        for (int i : mp[temp2])
        {
            if (i != f)
            {
                ans[o++] = i;
            }
        }
    }
    cout << "! ";
    cout.flush();
    for (int i = 1; i < n + 1; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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