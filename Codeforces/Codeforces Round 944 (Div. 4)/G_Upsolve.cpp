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
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<int> pos;
    map<ll, pair<vector<ll>, vector<ll>>> mp;
    bool c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // cout << bitset<8>(v[i] >> 2) << " " << v[i] << endl;
        int config = v[i] >> 2;
        mp[config].first.push_back(i);
        mp[config].second.push_back(v[i]);
    }

    vector<ll> temp;
    for (auto &i : mp)
    {
        int t = i.second.second.size();
        if (t >= 2)
        {
            int j = 0;
            while (t--)
            {
                temp.push_back(i.second.second[j]);
                j++;
            }
            j = 0;
            t = i.second.first.size();
            while (t--)
                pos.push_back(i.second.first[j++]);
        }

        else
        {
            i.second.first = {-1};
        }
    }
    sort(temp.begin(), temp.end());
    sort(pos.begin(), pos.end());

    // debug(temp);
    int j = 0;
    // debug(pos);
    for (auto i : pos)
    {

        v[i] = temp[j];
        j++;
    }

    for (auto i : v)
        cout << i << " ";
    cout << endl;
    //     vector<int> b{1, 5, 2, 6, 7};
    //     for (int i : b)
    //         cout << i << " ";
    //     cout << endl;
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