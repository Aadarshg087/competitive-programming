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
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    map<ll, ll> mp;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        st.insert(v[i]);
    }
    vector<ll> vv(all(st));
    // print(vv);
    sort(all(vv));
    n = vv.size();
    ll ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ll mm = m;
        ll temp = 0;
        ll need = m / vv[i];
        ll temp1 = 0;
        if (need >= mp[vv[i]])
        {
            temp1 = mp[vv[i]] * vv[i];
            // print(temp1);
            mm -= temp1;
        }
        else
        {
            temp1 = need * vv[i];
            mm -= temp1;
            ans = max(ans, temp1);
        }
        // print(mm);
        // cout << mm << " ";

        ll temp2 = 0;
        if (i != n - 1 && abs(vv[i + 1] - vv[i]) == 1)
        {
            ll need = mm / vv[i + 1];
            if (need >= mp[vv[i + 1]])
            {
                temp2 = mp[vv[i + 1]] * vv[i + 1];
                mm -= temp2;
            }
            else
            {
                temp2 = need * vv[i + 1];
                // print(temp2);
                mm -= temp2;
            }
            // cout << mm << ": ";
        }
        ans = max(ans, temp1 + temp2);
        // cout << temp1 + temp2 << endl;
    }
    reverse(all(vv));

    for (int i = 0; i < n; i++)
    {
        ll mm = m;
        ll temp = 0;
        ll need = m / vv[i];
        ll temp1 = 0;
        if (need >= mp[vv[i]])
        {
            temp1 = mp[vv[i]] * vv[i];
            // print(temp1);
            mm -= temp1;
        }
        else
        {
            temp1 = need * vv[i];
            mm -= temp1;
            ans = max(ans, temp1);
        }
        // print(mm);
        // cout << mm << " ";

        ll temp2 = 0;
        if (i != n - 1 && abs(vv[i + 1] - vv[i]) == 1)
        {
            ll need = mm / vv[i + 1];
            if (need >= mp[vv[i + 1]])
            {
                temp2 = mp[vv[i + 1]] * vv[i + 1];
                mm -= temp2;
            }
            else
            {
                temp2 = need * vv[i + 1];
                // print(temp2);
                mm -= temp2;
            }
            // cout << mm << ": ";
        }
        ans = max(ans, temp1 + temp2);
        // cout << temp1 + temp2 << endl;
    }
    cout << ans << endl;

    // ll ans = INT_MIN;
    // for (int i = 0; i < vv.size(); i++)
    // {
    //     ll temp = 0;
    //     ll mm = m;
    //     temp += mp[vv[i]] * vv[i];
    //     // print(temp);
    //     // mm -= temp;
    //     if (mm - temp <= 0)
    //     {
    //         print(temp);
    //         ll t = m / (vv[i]);
    //         temp = t * vv[i];
    //         mm -= temp;
    //     }
    //     ll temp2 = 0;
    //     if (i != vv.size() - 1 && abs(vv[i + 1] - vv[i]) == 1)
    //     {
    //         temp2 = mp[vv[i + 1]] * vv[i + 1];
    //         if (mm - temp2 <= 0)
    //         {
    //             print(temp2);
    //              // ans = max(ans, mm);
    //             ll t = m / (vv[i + 1]);
    //             temp2 = t * vv[i + 1];
    //             mm -= temp2;
    //         }
    //         // print(temp);
    //     }
    //     ans = max(ans, temp + temp2);
    //     // if (mm - temp <= 0)
    //     // {
    //     //     cout << m << endl;
    //     //     return;
    //     // }
    //     // ans = max(ans, temp);
    //     // mm -= temp;
    //     // cout << "ans: " << ans << endl;
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
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}