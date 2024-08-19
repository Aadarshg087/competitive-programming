#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ------------------------ Macros -------------------------
#define ll long long int
// #define endl "\n"

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

    if (n == 2)
    {
        cout << "? " << 1 << " " << 2 << endl;
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            cout << "! " << 2 << endl;
        }
        else
            cout << "! " << 1 << endl;
        return;
    }
    int low = 1;
    int high = n;
    int ans = 0;
    int nn = log(n) / log(2);
    while (low < high)
    {
        cout << "? " << low << " " << high << endl;
        int secondMax;
        cin >> secondMax;
        int mid = (low + high) >> 1;
        if (low + 1 == high)
            break;
        if (secondMax <= mid)
        {
            cout << "? " << low << " " << mid << endl;
            int sm;
            cin >> sm;
            if (sm == secondMax)
            {
                ans = mid;
                high = mid;
            }
            else
                low = mid;
        }
        else
        {

            cout << "? " << mid << " " << high << endl;
            int sm;
            cin >> sm;
            if (sm == secondMax)
            {
                ans = mid;
                low = mid;
            }
            else
                high = mid;
        }
    }
    cout << "? " << low << " " << high << endl;
    int temp;
    cin >> temp;
    if (temp == low)
    {
        cout << "! " << high << endl;
    }
    else
        cout << "! " << low << endl;
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