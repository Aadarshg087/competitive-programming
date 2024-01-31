#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n = 1000;
    bool arr[n];
    memset(arr, true, sizeof(arr));
    // It does leave some false positive prime numbers
    for (int i = 4; i < n; i++)
    {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
        {
            arr[i] = false;
        }
    }

    bool isPrime[n];
    memset(isPrime, 1, sizeof(isPrime));

    // Seive Algo
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    // Printing the both
    for (int i = 0; i < n; i++)
    {
        if (isPrime[i] == 1)
            cout << i << " ";
        if (arr[i] == 1)
            cout << " " << i << endl;
        // If only one number is printing, that is false positive
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}