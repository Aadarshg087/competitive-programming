#include <bits/stdc++.h>
using namespace std;

// ------------------------ Macros -------------------------
#define int long long int
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define INF 1e18
#define ff first
#define ss second

// ---------------------- Debug Functions -------------------------
#define p(x)            \
    cout << #x << ": "; \
    _print(x);          \
    cout << endl;
void _print(int t) { cout << t; }
void _print(string t) { cout << t; }
void _print(char t) { cout << t; }
void _print(double t) { cout << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T, class V>
void _print(multimap<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cout << "{";
    _print(p.ff);
    cout << ",";
    _print(p.ss);
    cout << "}";
}
template <class T>
void _print(vector<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}
template <class T>
void _print(set<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cout << "[ ";
    for (T i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cout << "[ ";
    for (auto i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}
template <class T, class V>
void _print(multimap<T, V> v)
{
    cout << "[ ";
    for (auto i : v)
    {
        _print(i);
        cout << " ";
    }
    cout << "]";
}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int getRandomNumber(int l, int r) { return uniform_int_distribution<int>(l, r)(rng); }

// Seive Algo -------------------
const int NN = 1e6 + 7;
vector<bool> isPrime(NN, true);
void seiveAlgo()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < NN; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < NN; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

// Binary Exponentiation - (Check MOD Value) -------------------
int BinaryExpoRecur(int a, int p)
{
    const int mod = 1e9 + 7;
    if (p == 0)
        return 1;
    if (p == 1)
        return a;
    int ans = BinaryExpoRecur(a, p / 2);
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

int __lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}

int mex(vector<int> &v)
{
    int num = 0;
    set<int> st(all(v));
    bool c = 0;
    for (auto &i : st)
    {
        if (i != num)
        {
            return num;
        }
        num++;
    }
    return num;
}

vector<int> spf(100100 + 7);
void BeforePrimeFactorisation()
{
    int N = 100100 + 7;
    for (int i = 0; i < N; i++)
        spf[i] = i;

    for (int i = 2; i < N; i++)
    {
        for (int j = 2 * i; j < N; j += i)
        {
            if (spf[j] == j)
                spf[j] = i;
        }
    }
}
map<int, int> primeFactorisation(int n) // run Pre-requisite function
{
    // vector<int> ans; // for unique prime factors
    map<int, int> mp;

    while (n > 1)
    {
        int x = spf[n];
        while (n % x == 0)
        {
            mp[x]++;
            n /= x;
        }
        // ans.push_back(x);
    }
    // return ans;
    return mp;
}

bool check(int w, vector<int> &v, int c)
{
    int n = v.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = v[i] + (2 * w);
        ans += temp * temp;
        if (ans >= c)
            return 1;
    }
    return ans >= c;
}

void solvee()
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int low = 0;
    int high = sqrt(c);
    int ans = 0;
    while (low <= high)
    {
        int mid = (1LL * low + high) >> 1;
        if (check(mid, v, c))
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
    - Try to prove yourself wrong
    - int is mapped with long long int
    - Check endl while doing interactive problems
    - Check corner cases (out of bounds for loops)
    - Revise the code
*/

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("C:/Users/aadar/Desktop/input.txt", "r", stdin);
    // #endif

    // seiveAlgo();
    // BeforePrimeFactorisation()

    int t;
    cin >> t;
    while (t--)
        solvee();
    return 0;
}