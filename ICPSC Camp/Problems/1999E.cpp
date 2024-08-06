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

const int NN = 2e5 + 7;
vector<int> arr(NN);

void pre()
{
    arr[0] = 0;
    for (int i = 1; i <= NN; i++)
    {
        int nn = i;
        int count = 0;
        while (nn != 0)
        {
            nn /= 3;
            count++;
        }
        arr[i] = arr[i - 1] + count;
    }
    // for (int i : arr)
    //     cout << i << endl;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    int ans = 0;
    ans += arr[r] - arr[l - 1];
    ans += arr[l] - arr[l - 1];
    cout << ans << endl;
    arr.clear();
    // -------------------------
    // vector<ll> v(r - l + 1);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     v[i] = l;
    //     l++;
    // }
    // // print(v);

    // if (v[0] < 3)
    // {
    //     ans++;
    //     v[1] = 3 * v[1];
    // }
    // else
    // {
    //     // ans += (v[0] / 3) + 1;
    //     // v[1] = (v[1]) * ((v[0] / 3) + 1);

    //     // int count = 0;
    //     // while (v[0] != 0)
    //     // {
    //     //     v[0] /= 3;
    //     //     v[1] *= 3;
    //     //     ans++;
    //     //     count++;
    //     // }
    //     int count = (log(v[0]) / log(3)) + 1;
    //     ans += count;
    //     v[1] *= BinaryExpoRecur(3, count);
    //     // print(count);
    // }

    // for (int i = 1; i < v.size(); i++)
    // {
    //     if (v[i] < 3 && v[i] >= 1)
    //     {
    //         ans++;
    //         v[i + 1] = v[i + 1] * 3;
    //     }
    //     else if (v[i] >= 3)
    //     {
    //         int count = (log(v[i]) / log(3)) + 1;
    //         ans += count;
    //         // while (v[i] != 0)
    //         // {
    //         //     v[i] /= 3;
    //         //     ans++;
    //         //     count++;
    //         // }
    //         // cout << count << endl;
    //     }
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
    pre();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
