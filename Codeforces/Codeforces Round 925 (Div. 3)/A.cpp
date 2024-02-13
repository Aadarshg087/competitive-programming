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
void solve()
{
    ll n;
    cin >> n;

    vector<char> v(27);
    char ch = 'a';
    for (int i = 1; i <= 26; i++)
    {
        v[i] = ch;
        ch++;
    }

    // for (int i = 1; i <= 26; i++)
    // {
    //     cout << i << " " << v[i] << endl;
    // }

    string temp = "";
    int t = 52;
    for (int i = 1; i <= 26; i++)
    {
        temp = v[i];
        if (n - i <= t)
        {
            if (n - i <= 26)
            {
                temp += v[1];
                temp += v[(n - i) - 1];
                cout << temp << endl;
                return;
            }
            else
            {
                int y = (n - i) - 26;
                temp += v[y];
                int l = n - i - y;
                temp += v[l];
                break;
            }
        }
    }
    cout << temp << endl;
    return;
}

/*
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