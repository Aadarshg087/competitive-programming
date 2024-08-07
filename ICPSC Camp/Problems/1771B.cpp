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

int fact(int n)
{
    if (n <= 0)
        return 0;
    int i = 1;
    int ans = 0;
    while (i <= n)
    {
        ans += i;
        i++;
    }
    return ans;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, set<int>> mp;
    for (int i = 0; i < m; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        mp[temp1].insert(temp2);
        mp[temp2].insert(temp1);
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
        if (mp.find(v[i]) == mp.end())
        {
            mp[v[i]] = {0};
        }
    }

    // print("Printing the map: ");
    // for (auto it : mp)
    // {
    //     cout << it.first << ": ";
    //     print(it.second);
    // }

    set<int> st;
    int i = 1;
    ll ans = 0;
    while (i <= n)
    {
        // print(i);
        bool c = 1;
        int temp = i;
        int found = 1;
        // can we take this element
        // correspoonding ele should not present in set
        for (auto it : mp[temp])
        {
            if (st.empty())
                break;

            if (st.find(it) != st.end()) // if found
            {
                c = 0; // if not excecuted, means we can take
                found = it;
                break;
            }
        }
        if (c)
        {
            st.insert(i);
            i++;
        }
        else
        {
            // print(i);
            // cout << "Subsegments: ";
            // for (auto itt : st)
            //     cout << itt << " ";
            // cout << endl;
            ans += fact((int)st.size() - 1);
            i = found + 1;
            // cout << i << "sdf" << endl;
            st.clear();
        }
    }

    ans += fact((int)st.size() - 1);
    // for (auto it : st)
    //     cout << it << " ";
    // cout << endl;
    cout << ans + n << endl;
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