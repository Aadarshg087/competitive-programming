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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> temp = v;
    sort(temp.begin(), temp.end());

    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        if (temp[i] == -1)
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (temp[j] != -1 && abs(temp[i] - temp[j]) % k == 0)
            {
                p.push_back({temp[i], temp[j]});
                // temp[i] = -1;
                // temp[j] = -1;
                break;
            }
        }
    }
    int ans = 0;
    multiset<int> st;
    for (auto i : p)
    {
        cout << i.first << " " << i.second << ": " << abs(i.first - i.second) << endl;
        st.insert(abs(i.first - i.second) / k);
    }
    n /= 2;
    while (n--)
    {
        ans += *st.begin();
        cout << *st.begin() << endl;
        st.erase(st.begin());
    }
    cout << ans << endl;

    // vector<int> diff;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     diff.push_back(abs(temp[i] - temp[i + 1]));
    // }
    // debug(diff);
    // multiset<int> st;
    // ll maxi = INT_MIN;
    // for (int i = 0; i < diff.size(); i++)
    // {

    // }
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