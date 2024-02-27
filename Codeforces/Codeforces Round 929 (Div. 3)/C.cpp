#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

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

vector<int> divisor(ll l)
{
    vector<int> ans;
    for (int i = 1; i * i <= l; i++)
    {
        if (l % i == 0)
        {
            ans.push_back(i);
            // if (l / i != i)
            // {
            //     ans.push_back(l / i);
            // }
        }
    }
    return ans;
}

bool powerCheck(ll check, ll n)
{
    cout << check << " " << n << endl;
    if (check == 1)
        return true;
    while (true)
    {
        if (n == check)
            return true;
        if (n > check)
            return false;
        n *= n;
    }
}

void solve()
{
    ll a, b, l;
    cin >> a >> b >> l;
    vector<int> div = divisor(l);
    // for (int i : div)
    //     cout << i << " ";

    ll n = div.size();
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        ll f1 = div[i];
        ll f2 = l / div[i];
        cout << "factors: " << f1 << " " << f2 << endl;
        if (powerCheck(f1, a) || powerCheck(f1, b))
        {
            count++;
        }
        if (powerCheck(f2, a) || powerCheck(f2, b))
        {
            count++;
        }
    }
    cout << count << endl;
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
    {
        solve();
    }
    return 0;
}