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

bool goodString(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[(n - 1) - i])
        {
            return false;
        }
    }
    return true;
}

void solve2()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {

        if (s[i] == '1')
            count1++;
        else
            count0++;
    }

    if (count0 != count1)
    {
        cout << -1 << endl;
        return;
    }

    // string p = "abcd";
    // string o = "ll";
    // p.insert(0, o); // inserted the string at 0 index;
    // cout << p << endl;

    int i = 0;
    int j = n - 1;
    string m = "01";
    vector<int> ans;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            // cout << i << " " << j << " ";
            if (s[i] == '1')
            {
                s.insert(i, m);
                i += 1;
                j--;
                ans.push_back(i);
            }
            else
            {
                s.insert(j + 1, m);
                j += 1;
                i++;
                ans.push_back(j);
            }
            // cout << s << endl;
        }
        else
        {
            i++;
            j--;
        }
    }
    // cout << s << endl;

    cout << ans.size() << endl;
    if (ans.size() == 0)
    {
        cout << endl;
        return;
    }

    for (int i : ans)
        cout << i << " ";
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count0++;
        else
            count1++;
    }

    if (count0 != count1)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> ans;
    deque<char> character;
    for (int i = 0; i < n; i++)
    {
        character.push_back(s[i]);
    }

    int d = 0;
    while (!character.empty())
    {
        if (character.front() == character.back()) // 0 0
        {
            if (character.front() == '0')
            {

                character.push_back('0');
                character.push_back('1');
                ans.push_back(n - d);
            }
            else // 1 1
            {
                character.push_front('1');
                character.push_front('0');
                ans.push_back(0 + d);
            }
            n += 2;
        }

        while (!character.empty() && character.front() != character.back())
        {
            character.pop_back();
            character.pop_front();
            d++;
        }
    }

    cout << ans.size() << endl;
    if (ans.size() == 0)
    {
        cout << endl;
        return;
    }

    for (int i : ans)
        cout << i << " ";
    cout << endl;
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
        solve2();
    return 0;
}