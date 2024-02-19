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

// Upsolve
void anotherSolve(string s)
{
    // XOR will not work here cause
    // there can even number of 'A' as well as odd number of 'A'
    // both of the times A is the answer
    int n = s.size();
    int x = s[0];
    for (int i = 1; i < n; i++)
    {
        x ^= s[i];
    }
    cout << (char)(x) << endl;
}
void solve()
{
    string s;
    cin >> s;
    anotherSolve(s);
    return;
    int countA = 0;
    int countB = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s[i] == 'A')
            countA++;
        else
            countB++;
    }

    if (countA > countB)
        cout << 'A' << endl;
    else
        cout << 'B' << endl;
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