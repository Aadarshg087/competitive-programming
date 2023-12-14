#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

int maxPathSum(int **arr, int rows, int cols)
{
    if (rows == 0 && cols == 0)
    {
        return arr[rows][cols];
    }
    int temp1, temp2;
    if (rows - 1 > 0)
        temp1 = arr[rows][cols] + maxPathSum(arr, rows - 1, cols);
    else if (cols - 1 > 0)
        temp2 = arr[rows][cols] + maxPathSum(arr, rows, cols - 1);
    int ans = max(temp1, temp2);

    return ans;
}

void solve()
{
    // int rows, cols;
    // cin >> rows >> cols;
    // vector<vector<int>> m(rows);

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin >> m[rows][cols];
    //     }
    // }

    // How it should bes
    // vector<vector<int>> mat(rows,vector<int>cols));

    // cout << maxPathSum(m, rows, cols) << endl;

    // -----------------------------------------
    int r, c;
    cin >> r >> c;

    int **arr = new int *[r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << maxPathSum(arr, r - 1, c - 1) << endl;
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