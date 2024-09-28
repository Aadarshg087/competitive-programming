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

// ----------------- Helper Functions ---------------------

int expo(int a, int b, int mod)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}

int gcd(int a, int b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

void extendgcd(int a, int b, int *v)
{
    if (b == 0)
    {
        v[0] = 1;
        v[1] = 0;
        v[2] = a;
        return;
    }
    extendgcd(b, a % b, v);
    int x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
} // pass an arry of size1 3

int mminv(int a, int b)
{
    int arr[3];
    extendgcd(a, b, arr);
    return arr[0];
} // for non prime b
int mminvprime(int a, int b) { return expo(a, b - 2, b); }
int mod_add(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
int mod_mul(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
int mod_sub(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
int mod_div(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} // only for prime m

int phin(int n)
{
    int number = n;
    if (n % 2 == 0)
    {
        number /= 2;
        while (n % 2 == 0)
            n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
                n /= i;
            number = (number / i * (i - 1));
        }
    }
    if (n > 1)
        number = (number / n * (n - 1));
    return number;
} // O(sqrt(N))

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

int __lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
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
/*------ Bas itna hi krna tha scroll -------*/

void solvee()
{
    int n, m;
    cin >> n >> m;
    int ee, sss;
    int v;
    cin >> sss >> ee >> v;
    vector<int> e(ee);
    vector<int> s(sss);
    int q;

    for (int i = 0; i < sss; i++)
        cin >> s[i];
    for (int i = 0; i < ee; i++)
        cin >> e[i];

    cin >> q;
    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2)
        {
            cout << abs(y1 - y2) << endl;
            continue;
        }
        auto it = upper_bound(e.begin(), e.end(), y1);
        int res = INT_MAX;
        if (it != e.end())
        {
            int val = *it;
            int dis = abs(x1 - x2);
            res = min(res, abs(y1 - val) + abs(y2 - val) + (dis + v - 1) / v);
        }
        if (it != e.begin())
        {
            int val = *prev(it);
            int dis = abs(x1 - x2);
            res = min(res, abs(y1 - val) + abs(y2 - val) + (dis + v - 1) / v);
        }
        it = upper_bound(s.begin(), s.end(), y1);
        if (it != s.end())
        {
            int val = *it;
            int dis = abs(x1 - x2);
            res = min(res, abs(y1 - val) + abs(y2 - val) + dis);
        }
        if (it != s.begin())
        {
            int val = *prev(it);
            int dis = abs(x1 - x2);
            res = min(res, abs(y1 - val) + abs(y2 - val) + dis);
        }
        cout << res << endl;
    }
    // while (q--)
    // {
    //     int x1, y1, x2, y2;
    //     cin >> x1 >> y1 >> x2 >> y2;

    //     if (x1 == x2)
    //     {
    //         cout << abs(y1 - y2) << endl;
    //         continue;
    //     }
    //     auto it = upper_bound(all(e), y1);
    //     int ans = LLONG_MAX;
    //     if (it != e.end())
    //     {
    //         int right = *it;
    //         int diff = abs(x2 - x1);
    //         int dis = (diff + v - 1) / v;
    //         ans = min(ans, abs(right - y1) + dis + abs(right - y2));
    //     }
    //     if (it != e.begin())
    //     {
    //         int left = *prev(it);
    //         int diff = abs(x2 - x1);
    //         int dis = (diff + v - 1) / v;
    //         ans = min(ans, abs(y1 - left) + dis + abs(y2 - left));
    //     }
    //     it = upper_bound(all(s), y1);
    //     if (it != s.end())
    //     {
    //         int right = *it;
    //         int dis = abs(x2 - x1);
    //         ans = min(ans, abs(y2 - right) + dis + abs(y1 - right));
    //     }

    //     if (it != s.begin())
    //     {
    //         int left = *prev(it);
    //         int dis = abs(x2 - x1);
    //         ans = min(ans, abs(y2 - left) + dis + abs(y1 - left));
    //     }
    //     cout << ans << endl;
    // }
}

/*
    - Read the problem twice (10 baariii)
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

    // int t;
    // cin >> t;
    // while (t--)
    solvee();
    return 0;
}