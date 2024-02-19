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

// Upsolve Solution
// Bs ittu sa door tha contest mein is questions ko solve krne se
const int M = 2e5 + 1;
vector<int> p(M, 0);
ll sumOfDigits(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}
void solve()
{
    ll n;
    cin >> n;

    cout << p[n] << endl;
    // for (int i : p)
    //     cout << i << endl;
    // // int newn = n / 10;
    // ll ans = 0;
    // int tens = 1;
    // while (n != 0)
    // {
    //     int rem = n % 10;
    //     rem /= tens;
    //     ans += p[rem] * tens;
    //     n = n / 10;
    //     tens *= 10;
    // }
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
    int prev = 0;
    ll sum = 0;
    for (int i = 1; i <= M; i++)
    {
        if (i % 10 == 0)
        {
            prev = sumOfDigits(i);
            sum += prev;
            p[i] = sum;
            continue;
        }
        sum += (i % 10) + prev;
        p[i] = sum;
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}