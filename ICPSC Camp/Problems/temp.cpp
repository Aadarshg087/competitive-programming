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

vector<int> leftToRight(vector<int> &v)
{
    int n = v.size();
    vector<int> temp(n);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && v[st.top()] >= v[i])
            st.pop();

        if (st.empty())
        {
            temp[i] = -1;
            st.push(i);
        }
        else
        {
            temp[i] = st.top();
            st.push(i);
        }
    }
    return temp;
}

vector<int> rightToLeft(vector<int> &v)
{
    int n = v.size();
    vector<int> temp(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && v[st.top()] >= v[i])
            st.pop();
        if (st.empty())
        {
            temp[i] = -1;
            st.push(i);
        }
        else
        {
            temp[i] = st.top();
            st.push(i);
        }
    }
    return temp;
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

    vector<int> pre = leftToRight(v); // prev smaller
    vector<int> suf = rightToLeft(v); // next smaller
    // Next  smaller element wala concept
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int num1 = (pre[i] == -1) ? i : abs(i - pre[i]) - 1;
        int num2 = (suf[i] == -1) ? n - i : abs(suf[i] - i);
        ll temp = 1LL * v[i] * (num1 + num2);
        ans = max(temp, ans);
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