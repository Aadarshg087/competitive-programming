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
    if ((n & 1) == 0)
    {
        cout << n - 3 << " " << 2 << " " << 1 << endl;
        return;
    }

    ll num1 = (n + 1) / 2;
    ll num2 = 0;
    if (num1 & 1)
    {
        num2 = (n - 1) - num1;
        cout << num1 << " " << num2 << " " << 1 << endl;
    }
    else
    {
        num1++;
        num2 = (n - 1) - num1;
        cout << num1 << " " << num2 << " " << 1 << endl;
    }
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