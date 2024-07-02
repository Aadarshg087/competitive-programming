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

    int one, zero;
    cin >> zero >> one;

    // -1 condition
    if (one < zero - 1 || one > (zero + 1) * 2)
    {
        cout << -1 << endl;
        return;
    }

    string ans = "0";
    zero--;
    while (zero)
    {
        // cout << one << " " << zero << endl;
        if (one > zero)
        {
            ans.push_back('1');
            ans.push_back('1');
            one -= 2;
        }
        else if (one == zero)
        {
            ans.push_back('1');
            one--;
        }
        ans.push_back('0');
        zero--;
    }
    // cout << ans << endl;

    int cnt = 1;
    while (one && cnt <= 2)
    {
        ans = '1' + ans;
        cnt++;
        one--;
    }
    cnt = 1;
    while (one && cnt <= 2)
    {
        ans.push_back('1');
        cnt++;
        one--;
    }
    cout << ans << endl;
    // TLE
    // string ans = "";
    // for (int i = 0; i < zero; i++)
    // {
    //     ans += "01";
    // }
    // ans.pop_back();
    // one -= zero - 1;

    // string o = string(one, '1');
    // int n = o.size();
    // int ind = 0;
    // int cnt = 1;
    // while (cnt <= 2 && ind < n)
    // {
    //     ans.push_back('1');
    //     cnt++;
    //     ind++;
    // }

    // if (ind == n)
    // {
    //     cout << ans << endl;
    //     return;
    // }

    // cnt = 1;
    // while (cnt <= 2 && ind < n)
    // {
    //     ans = '1' + ans;
    //     cnt++;
    //     ind++;
    // }
    // if (ind == n)
    // {
    //     cout << ans << endl;
    //     return;
    // }

    // // insert operation
    // int i = 3; // first 1 pr hai
    // int size = ans.size();
    // while (i < ans.size() && ind < n)
    // {
    //     ans.insert(i, "1");
    //     i += 3;
    //     ind++;
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
    solve();
    // seiveAlgo();
    // int t;
    // cin >> t;
    // while (t--)
    //     solve();
    return 0;
}