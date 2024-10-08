#include <bits/stdc++.h>
using namespace std;

// ------------------------ Macros -------------------------
#define int long long int
#define endl '\n'
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
    _print(p.first);
    cout << ",";
    _print(p.second);
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
bool check(vector<int> &a, vector<int> &temp, int size, int k, vector<int> &pre, vector<pair<int, int>> &temp2)
{
    int count = 0;
    int prev = -1;
    int fruitCount = 0;

    for (auto it : temp2)
    {
        int i = it.first;
        int j = it.second;
        while (i + size - 1 <= j)
        {
            int fruitCount = pre[i + size - 1] - (i == 0 ? 0 : pre[i - 1]);
            if (fruitCount <= k)
                return true;
            else
                i++;
        }
    }
    return false;
}

void solvee()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    vector<int> temp(n);
    vector<pair<int, int>> temp2;
    vector<int> pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }
    // p(pre);
    int num = 1;
    for (int i = 0; i < n; i++)
    {

        if (i == n - 1) // last element condition
        {
            temp[i] = num;
        }
        else
        {
            if (h[i] % h[i + 1] == 0)
            {
                temp[i] = num;
            }
            else
            {
                temp[i] = num;
                num++;
            }
        }
    }
    int prev = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (temp[i] == temp[i + 1])
        {
        }
        else
        {
            temp2.push_back({prev, i});
            prev = i + 1;
        }
    }
    temp2.push_back({prev, n - 1});
    // p(temp2);
    // p(temp);

    int low = 0;
    int high = a.size() + 1;
    int ans = 0;
    while (low <= high)
    {
        int mid = (1LL * low + high) >> 1;
        if (check(a, temp, mid, k, pre, temp2))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
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
    // solvee();
    // seiveAlgo();
#ifndef ONLINE_JUDGE
    freopen("C:/Users/aadar/Desktop/input.txt", "r", stdin);
#endif
    int t;
    cin >> t;
    while (t--)
        solvee();
    return 0;
}