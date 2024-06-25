/*
#include <iostream>
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

int calc(string temp)
{
    int n = temp.size();
    string temp2 = "";
    int i = 0;
    int ans = 0;
    while (i < n)
    {
        string t = "";
        while (temp[i] >= '1' && temp[i] <= '9')
        {
            t += temp[i];
            i++;
        }
        int num1 = stoi(t);
        if (temp[i] == '*')
        {
            // int ans = (temp[i] - '0') * (temp[i + 1] - '0');
            // temp2 += to_string(ans);
            // i += 2;
            i++;
            t = "";
            while (temp[i] >= '1' && temp[i] <= '9')
            {
                t += temp[i];
                i++;
            }
            int num2 = stoi(t);
            ans = num1 * num2;
            temp2 += to_string(ans);
            temp2 += "_";
        }
        else
        {
            temp2 += t;
            temp2 += temp[i];
            i++;
        }
        if (i == n)
        {
            temp = temp2;
        }
    }

    cout << "After proxession *: ";
    debug(temp);

    i = 0;
    string temp3 = "";
    temp2 = "";
    while (i < n)
    {
        string t = "";
        while (temp2[i] >= '1' && temp2[i] <= '9')
        {
            t += temp[i];
            i++;
        }
        if (temp[i] == '_')
            i++;
        int num1 = stoi(t);
        if (temp[i] == '+')
        {
            // int ans = (temp[i] - '0') * (temp[i + 1] - '0');
            // temp2 += to_string(ans);
            // i += 2;
            i++;
            t = "";
            while (temp[i] >= '1' && temp[i] <= '9')
            {
                t += temp[i];
                i++;
            }
            int num2 = stoi(t);
            ans = num1 + num2;
            temp2 += to_string(ans);
            temp2 += "_";
        }
        else
        {
            temp2 += t;
            temp2 += temp[i];
            i++;
        } // i++; for _
    }
}

int solve2(string s, int op)
{
    // Base case

    // Recurrence Relation
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int op = n - 2;
    bool zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zero = 1;
    }
    if (zero && op >= 2)
    {
        cout << 0 << endl;
        return;
    }

    // solve2(s, op);

    int ans = 0;
    int i = 0;
    for (i = 0; i < n && op > 1; i++)
    {
        if (s[i] == '1')
        {
        }
        else if (s[i] == '0' && op > 1)
        {
            ans *= s[i] - '0';
        }
        else
        {
            ans += s[i] - '0';
        }
        op--;
    }
    string t = "";
    while (i < n)
    {
        t += s[i];
        i++;
    }

    int y = stoi(t);
    debug(t);
    ans += y;
    cout << ans << endl;
}

    - Read the problem twice
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    // seiveAlgo();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
*/

#include <iostream>
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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 2)
    {
        cout << stoll(s) << endl;
        return;
    }

    if (n > 3 && count(s.begin(), s.end(), '0'))
    {
        cout << 0 << endl;
        return;
    }

    ll mini = LLONG_MAX;
    int ind = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     string temp = "";
    //     ll num = LLONG_MAX;
    //     // if (s[i] != '1' && s[i + 1] != '1')
    //     {
    //         temp.push_back(s[i]);
    //         temp.push_back(s[i + 1]);
    //         num = stoll(temp);
    //     }
    //     if (mini > num)
    //     {
    //         ind = i;
    //         mini = num;
    //     }
    // }
    if (s == "101")
    {
        cout << 1 << endl;
        return;
    }

    ll ans = 0;
    ll res = LLONG_MAX;
    ind = 0;
    mini = LLONG_MAX;
    while (ind < n - 1)
    {
        int i = 0;
        ans = 0;
        while (i < n)
        {
            if (i == ind)
            {
                string y = s.substr(ind, 2);
                mini = stoll(y);
                i += 2;
                continue;
            }
            if (s[i] == '1')
            {
                i++;
                continue;
            }
            else if (s[i] == '0')
            {
                cout << "0" << endl;
                return;
            }
            else
                ans += s[i] - '0';
            i++;
        }
        // debug(mini);
        ans += (mini != 1) ? mini : 0;
        // cout << ans << endl;
        res = min(res, ans);
        ind++;
    }
    cout << res << endl;
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
    // solve();
    // seiveAlgo();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}