#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void summationRec(int **arr1, int **arr2, int r, int c)
{
    

}
void summation(int **arr1, int **arr2, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
}

void solve()
{
    int r, c;
    cin >> r >> c;

    int **arr1 = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr1[i] = new int[c];
    }

    int **arr2 = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr2[i] = new int[c];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr2[i][j];
        }
    }

    summation(arr1, arr2, r, c);
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