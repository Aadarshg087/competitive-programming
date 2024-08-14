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
int ask(ll l, ll r)
{
    cout << "? " << l << " " << r << endl;
    cout.flush();

    ll num;
    cin >> num;
    return num;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> pre(n, 0);
    int nn = n;
    pre[0] = 0;
    ll l = 1;
    ll r = l + 1;
    int i = 1;
    int prevSum = 0;
    while (n--)
    {
        int num = ask(l, r);
        pre[i] = num;
        i++;
        r++;
        if (r == nn + 1)
            break;
    }
    // print(pre);
    vector<ll> real(nn, 0);
    for (int i = 2; i < nn; i++)
    {
        real[i] = pre[i] - pre[i - 1];
    }

    ll sum = pre[nn - 1] - pre[1];

    ll num = ask(2, nn);
    real[1] = num - sum;
    real[0] = pre[1] - real[1];
    // print(real);
    // print(pre);
    cout << "! ";
    for (auto i : real)
        cout << i << " ";
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