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

vector<int> p(51);
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
int anotherSolve(ll n)
{
    int tens = 10;
    int rem1 = n % 10;
    ll sum = 1;
    int ten2 = 1;
    n /= 10;
    int count = rem1;
    while (n != 0)
    {
        int rem = (n % 10) * tens;
        count += rem;
        rem /= 10;
        int ans1 = (rem * p[9]) + (p[rem / ten2]) + (rem / ten2) * count;
        sum += ans1;
        tens *= 10;
        ten2 *= 10;
        n /= 10;
    }

    sum += p[rem1];

    return sum;
}
void solve()
{
    ll n;
    cin >> n;

    cout << anotherSolve(n) << endl;

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
    for (int i = 1; i <= 50; i++)
    {
        p[i] += p[i - 1] + i;
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}