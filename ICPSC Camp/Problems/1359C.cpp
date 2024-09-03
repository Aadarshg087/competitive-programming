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

double check(int mid, double &ans, double &h, double &c, double &t)
{
    return (mid * h + (mid - 1) * c) / (2 * mid - 1);
}
void solve()
{
    double h, c, t;
    cin >> h >> c >> t;
    if (t <= (h + c) / 2)
    {
        cout << 2 << endl;
        return;
    }
    // mid hot cups mid-1 cold cups
    int low = 1;
    int high = 1e9;
    double ans = INT_MAX;
    int res = 0;

    while (low <= high)
    {
        int mid = (low + high) >> 1; // no of hot cups
        if (check(mid, ans, h, c, t) > t)
            low = mid + 1;
        else
            high = mid - 1;
    }
    for (int i = low - 1; i <= low + 1; i++)
    {
        double f = (i * h + (i - 1) * c) / (2 * i - 1);
        if (abs(f - t) < ans)
        {
            ans = abs(f - t);
            res = i;
        }
    }
    cout << 2 * res - 1 << endl;
}

// void solvee()
// {
//     double h, c, t;
//     cin >> h >> c >> t;
//     vector<double> temp;
//     double n = 1000; // for prdoubleing purpose
//     double prev = 0; // prev value
//     double ele = 1;
//     bool cc = 0; // cold turn
//     double ans = INT_MAX;
//     double count = 0;
//     double res = 0;
//     while (n--)
//     {
//         if (prev == 0) // first one is must
//         {
//             temp.push_back((prev + h) / ele);
//             prev += h;
//             cc = 0;
//             count++;
//         }
//         else if (cc == 0) // cold turn
//         {
//             double ans = (prev + c) / ele;
//             prev += c;
//             cc = 1;
//             temp.push_back(ans);
//             count++;
//         }
//         else if (cc == 1)
//         {
//             double ans = (prev + h) / ele;
//             prev += h;
//             cc = 0;
//             temp.push_back(ans);
//             count++;
//         }
//         if (abs(temp.back() - t) < ans) // find the min diff
//         {
//             ans = min(ans, abs((prev / ele) - t));
//             res = count;
//             // if (prev == 209)
//             //     cout << count << endl;
//         }

//         // cout << ele << " ";
//         // p(prev);
//         ele++;
//     }
//     // p(temp);
//     // cout << ans << endl; // min diff
//     cout << res << endl; // no of cups
// }

/*
    - Read the problem twice
    - Try to prove yourself wrong
    - double is mapped with long long int
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
    // freopen("C:/Users/aadar/Desktop/input.txt", "r", stdin);
    // #endif
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}