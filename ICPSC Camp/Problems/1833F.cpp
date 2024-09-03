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

void findExtra(map<int, int> mp, int s, int e, vector<int> &v, int &ans)
{
    // int ans = 0;
    for (int i = s; i <= e; i++)
    {
        ans += mp[v[i]] - 1;
    }
}
int modInverse(int A, int M)
{
    int m0 = M;
    int y = 0, x = 1;
    if (M == 1)
        return 0;
    while (A > 1)
    {
        int q = A / M, t = M;
        M = A % M, A = t, t = y, y = x - q * y, x = t;
    }
    if (x < 0)
        x += m0;
    return x;
}

void solvee()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    set<int> st;
    int MOD = 1e9 + 7;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        st.insert(temp);
        mp[temp]++;
    }
    vector<int> v;
    for (auto &it : st)
    {
        v.push_back(it);
    }
    int ans = 0;
    int tempAns = 1;

    if (k <= v.size())
    {
        for (int i = 0; i < k; i++)
        {
            tempAns = (tempAns * (mp[v[i]])) % MOD;
        }
        if (v[k - 1] - v[0] < k)
            ans = (ans + tempAns) % MOD;
    }

    for (int i = k; i < v.size(); i++)
    {
        // first minus : removing the contribution of last ele
        // tempAns = tempAns / mp[v[i - k]];
        int a = tempAns;
        int b = mp[v[i - k]];
        tempAns = (tempAns * modInverse(b, MOD)) % MOD;

        // second add : adding the constribution of the next element
        tempAns = (tempAns * mp[v[i]]) % MOD;
        if (v[i] - v[i - k + 1] < k)

            ans = (ans + tempAns) % MOD;
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