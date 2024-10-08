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
    int n, q;
    cin >> n >> q;
    string a;
    cin >> a;
    string b;
    cin >> b;
    // prefix sum
    vector<vector<int>> prefA(26, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
    {
        prefA[a[i] - 'a'][i + 1]++;
    }
    vector<vector<int>> prefB(26, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
    {
        prefB[b[i] - 'a'][i + 1]++;
    }
    for (auto i : prefA)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << " ---- " << endl;
    for (auto i : prefB)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << " ----------- " << endl;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            int temp1 = prefA[i][r] - prefA[i][l - 1]; // occ of each char b/w l & r in A
            int temp2 = prefB[i][r] - prefB[i][l - 1]; // occ of each char b/w l & r in B
            // cout << prefA[i][r] << " " << prefA[i][l - 1] << endl;
            // cout << prefB[i][r] << " " << prefB[i][l - 1] << endl;

            if (temp1 > temp2)
                ans += temp1 - temp2;
        }

        cout << ans << endl;
    }
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