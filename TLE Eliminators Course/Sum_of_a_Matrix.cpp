#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void summation(int arr1[][100], int arr2[][100], int r, int c)
{
}

void solve()
{
    int r, c;
    cin >> r >> c;
    // int arr1[r + 1][c + 1];
    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= c; j++)
    //     {
    //         cin >> arr1[i][j];
    //     }
    // }

    // int arr2[r + 1][c + 1];
    // for (int i = 1; i <= r; i++)
    // {
    //     for (int j = 1; j <= c; j++)
    //     {
    //         cin >> arr2[i][j];
    //     }
    // }

    int *arr1 = new int[(r + 1) * (m + 1)];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    int *arr2 = new int[(r + 1) * (m + 1)];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> arr2[i * j];
        }
    }

    summation(arr1, arr2, r, c);
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