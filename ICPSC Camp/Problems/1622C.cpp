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
bool check(vector<ll> &v, vector<ll> &pre, ll moves, ll maxSum, ll sum)
{
    if (sum - moves <= maxSum)
        return true;

    ll n = v.size();
    ll m = moves;
    ll j = 1;
    for (int i = n - 1; i >= 1; i--) // check i ending condition
    {
        ll tempSum = pre[n - 1 - j];
        ll endCountEle = j;
        j++;
        m = moves - endCountEle; // updated the moves acc to end ele
        // if (m < 0)
        //     return 0;
        ll firstElement = v[0] - m;            // update the first ele
        tempSum -= v[0];                       // remove contribution of first element
        tempSum += firstElement;               // add the update first ele
        tempSum += firstElement * endCountEle; // update the sum for last ele
        if (m < 0)              // no move on first element, all moves of type 2
            return 0;
        if (tempSum <= maxSum)
            return 1;
    }
    return false;

    // for (int i = n - 1; i >= max(1LL, 1LL * (n - moves)); i--)
    // {
    //     sum -= v[i];
    //     ll movesLeft = moves - (n - i);
    //     ll tempSum = sum - v[0] + (n - i + 1) * (v[0] - movesLeft);
    //     if (tempSum <= maxSum)
    //         return true;
    // }
    // return false;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(all(v));
    vector<ll> pre(n, 0);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    ll low = 0;
    ll sum = accumulate(all(v), 0LL);
    ll high = 1e10;
    ll ans = 0;
    while (low <= high)
    {
        ll mid = (low + high) >> 1;
        if (check(v, pre, mid, k, sum))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
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