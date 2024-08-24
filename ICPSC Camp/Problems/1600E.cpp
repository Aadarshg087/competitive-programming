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
    vector<int> v(n);
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        dq.push_back(v[i]);
    }
    vector<int> ans;
    int turn = 0;
    // 0 = alice and 1 = bob;
    string res = "";
    while (1)
    {
        if (ans.size() == 0)
        {
            ans.push_back(max(dq.front(), dq.back()));
            (dq.front() > dq.back() ? dq.pop_front() : dq.pop_back());
        }

        else if (dq.size() > 1 && max(dq.front(), dq.back()) > ans.back())
        {
            if (dq.front() == dq.back())
            {
                int f = dq.front();
                dq.pop_front();
                int e = dq.back();
                dq.pop_back();
                if (f >= dq.front() || e >= dq.back())
                    res = (turn == 0 ? "Alice" : "Bob");
                else
                    res = ((turn) == 0 ? "Bob" : "Alice");
                break;
            }
            ans.push_back(max(dq.front(), dq.back()));
            (dq.front() > dq.back() ? dq.pop_front() : dq.pop_back());
        }
        else
        {
            res = (turn == 0 ? "Bob" : "Alice");
            break;
        }
        turn = turn ^ 1;
    }
    cout << res << endl;
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