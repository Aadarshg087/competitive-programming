#include <bits/stdc++.h>
using namespace std;

// ------------------------ Macros -------------------------
#define int long long int
// #define endl '\n'
#define all(x) (x).begin(), (x).end()
#define INF 1e18

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

string forZero()
{
    // asking for 0
    cout << "? " << 1 << endl;
    int temp;
    cin >> temp;
    cout << "? " << 2 << endl;
    int temp2;
    cin >> temp2;
    if (temp < temp2)
    {
        return "";
    }
    return "right";
}

string forn(int n)
{

    // asking for n
    cout << "? " << n << endl;
    int temp;
    cin >> temp;
    cout << "? " << n - 1 << endl;
    int temp2;
    cin >> temp2;
    if (temp < temp2)
    {
        // cout << "! " << n << endl;
        return "";
    }
    return "left";
}

string check(int mid, int n)
{
    if (mid == 1)
    {
        return forZero();
    }
    if (mid == n)
    {
        return forn(n);
    }
    int t1, t2, t3;
    cout << "? " << mid - 1 << endl;
    cin >> t1;
    cout << "? " << mid << endl;
    cin >> t2;
    cout << "? " << mid + 1 << endl;
    cin >> t3;
    if (t1 > t2 && t2 < t3)
    {
        return "";
    }
    else if (t1 > t2 && t2 > t3)
    {
        return "right";
    }
    return "left";
}

void solvee()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "! " << 1 << endl;
        return;
    }

    int low = 1;
    int high = n;
    int ans = 1;
    while (low <= high)
    {
        int mid = (1LL * low + high) >> 1;
        string s = check(mid, n);
        if (s == "right")
        {
            low = mid + 1;
        }
        else if (s == "left")
        {
            high = mid - 1;
        }
        else
        {
            cout << "! " << mid << endl;
            ans = mid;
            return;
        }
    }
    cout << "! " << ans << endl;
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
    // solvee();
    // seiveAlgo();
    // #ifndef ONLINE_JUDGE
    //     freopen("C:/Users/aadar/Desktop/input.txt", "r", stdin);
    // #endif
    //     int t;
    //     cin >> t;
    //     while (t--)
    solvee();
    return 0;
}