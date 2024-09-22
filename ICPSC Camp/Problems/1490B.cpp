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

void solvee()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> temp(n);
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        temp[i] = v[i] % 3;
        count0 += (v[i] % 3 == 0 ? 1 : 0);
        count1 += (v[i] % 3 == 1 ? 1 : 0);
        count2 += (v[i] % 3 == 2 ? 1 : 0);
    }

    if (count0 == count1 && count0 == count2)
    {
        cout << 0 << endl;
        return;
    }
    // p(temp);
    // cout << count0 << " " << count1 << " " << count2 << endl;
    int bar = n / 3;
    int extra0 = 0, extra1 = 0, extra2 = 0;
    int need0 = 0, need1 = 0, need2 = 0;
    // p(bar);
    if (count0 >= bar)
        extra0 = abs(bar - count0);
    else
        need0 = bar - count0;
    if (count1 >= bar)
        extra1 = abs(bar - count1);
    else
        need1 = bar - count1;
    if (count2 >= bar)
        extra2 = abs(bar - count2);
    else
        need2 = bar - count2;

    // cout << extra0 << " " << extra1 << " " << extra2 << endl;
    // cout << need0 << " " << need1 << " " << need2 << endl;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int rem = v[i] % 3;
        if (rem == 0 && extra0)
        {
            if (need1)
            {
                ans += 1;
                need1--;
                extra0--;
            }
            else if (need2)
            {
                ans += 2;
                need2--;
                extra0--;
            }
        }
        else if (rem == 1 && extra1)
        {
            if (need2)
            {
                ans += 1;
                need2--;
                extra1--;
            }
            else if (need0)
            {
                ans += 2;
                need0--;
                extra1--;
            }
        }
        else if (rem == 2 && extra2)
        {
            if (need0)
            {
                ans += 1;
                need0--;
                extra2--;
            }
            else if (need1)
            {
                ans += 2;
                need1--;
                extra2--;
            }
        }
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
#ifndef ONLINE_JUDGE
    freopen("C:/Users/aadar/Desktop/input.txt", "r", stdin);
#endif

    // seiveAlgo();
    // BeforePrimeFactorisation()

    int t;
    cin >> t;
    while (t--)
        solvee();
    return 0;
}