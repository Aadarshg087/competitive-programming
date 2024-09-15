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
    int n, m;
    cin >> n >> m;
    bool c = 1;
    vector<vector<int>> v(n);
    vector<int> first;
    vector<int> second;
    bool isZeroFirst = 0;
    bool isZeroSecond = 0;
    int countFirst = 0;  // counting neg number in first
    int countSecond = 0; // neg numbers in second
    int sum = 0;
    int minEleFirst = INT_MAX;
    int minEleSecond = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            int temp;
            cin >> temp;
            sum += abs(temp);
            v[i].push_back(temp);
            if (c)
            {
                minEleFirst = min(minEleFirst, abs(temp));
                first.push_back(temp);
                c = 0;
                if (temp == 0)
                    isZeroFirst = 1;

                if (temp < 0)
                    countFirst++;
            }
            else
            {
                minEleSecond = min(minEleSecond, abs(temp));
                second.push_back(temp);
                c = 1;
                if (temp == 0)
                    isZeroSecond = 1;

                if (temp < 0)
                    countSecond++;
            }
        }
        if (i & 1)
        {
            c = 1;
        }
        else
            c = 0;
    }
    // p(first);
    // p(second);

    // p(sum);
    int ans1 = 0, ans2 = 0;

    if ((countFirst & 1))
    {
        if (!isZeroFirst)
        {

            sum -= 2 * minEleFirst;

            // sort(all(first));

            // for (int i = 1; i < first.size(); i++)
            // {
            //     ans1 += abs(first[i]);
            // }
            // ans1 += first[0];
        }
    }
    if ((countSecond & 1))
    {
        if (!isZeroSecond)
        {
            // p(minEleSecond);
            // sum -= 2 * minEleSecond;

            // sort(all(second));
            // for (int i = 1; i < second.size(); i++)
            // {
            //     ans2 += abs(second[i]);
            // }
            // ans2 += second[0];
        }
    }
    // cout << sum << endl;
    cout << ans1 + ans2 << endl;
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