#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        product *= arr[i];
    }
    int num = 2023;
    if (num % product != 0 || num < product)
    {
        cout << "NO" << endl;
        return;
    }

    if (num % product == 0)
    {
        cout << "YES" << endl;
        cout << num / product << " ";
        k--;
        for (int i = 0; i < k; i++)
        {
            cout << 1 << " ";

        }
    }
    cout << endl;
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