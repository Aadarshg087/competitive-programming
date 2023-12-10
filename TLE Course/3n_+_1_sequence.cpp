#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

int countSequence(int n)
{
    if (n == 1)
        return 0;

    int count = 0;
    if (n & 1 == 1)
        count = 1 + countSequence((3 * n) + 1);
    else
        count = 1 + countSequence(n / 2);

    return count;
}

void solve()
{
    int n;
    cin >> n;
    cout << countSequence(n) + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}