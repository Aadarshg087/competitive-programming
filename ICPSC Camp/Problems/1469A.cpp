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

bool isValid(string s)
{

    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty() && s[i] == ')')
            return false;
        else if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
            st.pop();
    }
    return st.empty();
}

void solvee()
{
    string s;
    cin >> s;
    int n = s.size();
    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }
    int open = count(all(s), '(');
    open = n / 2 - open;
    if (open < 0)
        open = 0;

    int mid = n / 2 - 1;
    // p(s);
    for (int i = 0; i < n; i++)
    {
        if (i <= mid)
        {
            if (s[i] == '?' && open)
            {
                s[i] = '(';
                open--;
            }
            else if (s[i] == '?')
                s[i] = ')';
        }
        else
        {
            if (s[i] == '?')
                s[i] = ')';
        }
    }
    // if (s[0] == ')' || s[n - 1] == '(')
    // {
    //     cout << "NO" << endl;
    //     return;
    // }
    // p(s);
    cout << (isValid(s) ? "YES" : "NO") << endl;
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