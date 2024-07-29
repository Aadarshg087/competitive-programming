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

bool check(vector<int> &a, vector<int> &b, int mid, int k)
{
    // first find thhe kth element

    // step 1 : first corrrect element in a
    int n = a.size();
    int m = b.size();
    int ind1 = (k / n) - 1;
    k %= n;
    int ind2 = b.size() - 1;
    if (k % m != 0)
        ind2 = (k % m) - 1;
    int kth = a[ind1] + b[ind2];
    if (mid < kth)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void solve()
{
    int n, m;
    int k;
    // cin >> n >> m;
    // cin >> k;

    // k = 1;
    // // k--;

    // n = 2;
    // m = 2;
    // vector<int> a{1, 2};
    // vector<int> b{4, 5};

    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];
    // k--;

    vector<int> total;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            total.push_back(a[i] + b[j]);
        }
    }
    sort(all(total));
    print(total);

    sort(all(a));
    sort(all(b));

    int low = a[0] + b[0];
    int high = a.back() + b.back();
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (check(a, b, mid, k)) // kya mid kth element hai ya usse bada hai,
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
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