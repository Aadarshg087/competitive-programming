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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> ind(m);
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        cin >> ind[i];
        ind[i]--;
        st.insert(ind[i]);
    }
    string c;
    cin >> c;

    sort(ind.begin(), ind.end());
    sort(c.begin(), c.end());
    string temp = string(s.size(), 'z');

    // ----- kya coding kr rha bhaiiii ----------------
    // debug(temp);
    // for (int i = 0; i < m; i++)
    // {
    //     cout << i << ": ";
    //     if (st.find(ind[i]) == st.end())
    //     {
    //         s[ind[i]] = c[i];
    //         st.insert(ind[i]);
    //         cout << c[i] << " " << ind[i] << endl;
    //     }
    //     else if (c[i] < s[ind[i]])
    //     {
    //         debug(s);
    //         s[ind[i]] = c[i];
    //         st.insert(ind[i]);
    //         cout << "YES" << endl;
    //     }
    // }

    int j = 0;
    for (int i : st)
    {
        s[i] = c[j++];
    }
    cout << s << endl;
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