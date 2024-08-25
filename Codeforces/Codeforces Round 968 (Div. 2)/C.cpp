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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(26);

    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    // print(a);

    multimap<int, char, greater<int>> mp;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != 0)
        {
            // mp[a[i]] = i + 'a';
            mp.insert({a[i], i + 'a'});
        }
    }
    // for (auto it : mp)
    //     cout << it.first << " " << it.second << endl;

    deque<pair<char, int>> dq;
    for (auto it : mp)
    {
        dq.push_back({it.second, it.first});
    }
    // for (auto it : dq)
    //     cout << it.first << " " << it.second << endl;
    string ans = "";
    while (dq.size() != 0)
    {
        ans.push_back(dq.begin()->first);
        dq.begin()->second--;
        if (dq.begin()->second == 0)
        {
            dq.pop_front();
        }
        else
        {
            dq.push_back(*dq.begin());
            dq.pop_front();
        }
    }
    cout << ans << endl;
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