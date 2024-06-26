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

void print(int i, int j, int n, int m)
{
    int c = 1;
    while (i < n)
    {
        if (c)
        {

            while (j < m)
            {
                cout << i + 1 << " " << j + 1 << " ";
                j++;
            }
            j = m - 1;
            c = 0;
        }
        else
        {
            while (j >= 0)
            {
                cout << i + 1 << " " << j + 1 << " ";
                j--;
            }
            j = 0;
            c = 1;
        }
        i++;
    }
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int x = 0;
    int y = 0;
    bool c = 1;

    int j = 0;
    int cnt = 1;
    int p = 1;
    int check = 0;
    if (k == 1)
    {
        cout << n * m << " ";
        print(0, 0, n, m);
        return;
    }
    cout << 2 << " ";
    for (int i = 0; i < n; i++)
    {
        if (c == 1)
        {
            while (j < m)
            {
                cout << i + 1 << " " << j + 1 << " ";
                if (cnt == 2)
                {
                    cout << endl;
                    p++;
                    if (p == k)
                    {
                        x = i;
                        y = j;
                        check = 1;
                        break;
                    }
                    cout << 2 << " ";
                    cnt = 1;
                }
                else
                    cnt++;
                j++;
            }
            if (check == 1)
                break;
            c = 0;
            j = m - 1;
            // cout << endl;
        }
        else
        {
            while (j >= 0)
            {
                // debug(j);
                cout << i + 1 << " " << j + 1 << " ";
                if (cnt == 2)
                {
                    cout << endl;
                    p++;
                    if (p == k)
                    {
                        x = i;
                        y = j;
                        check = 1;
                        break;
                    }
                    cout << 2 << " ";
                    cnt = 1;
                }
                else
                    cnt++;

                j--;
            }
            // cout << endl;
            if (check == 1)
                break;
            j = 0;
            c = 1;
        }
    }

    int i = x;
    j = y;
    // fix the points
    bool g = 1;
    cout << n * m - (2 * (k - 1)) << " ";
    while (i < n)
    {
        if (c)
        {
            while (j < m)
            {
                if (g)
                {
                    g = 0;
                    j++;
                    continue;
                }
                cout << i + 1 << " " << j + 1 << " ";
                j++;
            }
            j = m - 1;
            c = 0;
        }
        else
        {
            while (j >= 0)
            {
                if (g)
                {
                    g = 0;
                    j--;
                    continue;
                }
                cout << i + 1 << " " << j + 1 << " ";
                j--;
            }
            j = 0;
            c = 1;
        }
        i++;
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
    solve();
    // seiveAlgo();
    // int t;
    // cin >> t;
    // while (t--)
    //     solve();
    return 0;
}
