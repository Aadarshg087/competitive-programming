#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

ll calculate(int *arr1, int *arr2, int n)
{
}

void solve()
{
    int n;
    cin >> n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
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