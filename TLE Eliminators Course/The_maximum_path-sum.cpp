#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

ll maxSum(vector<vector<int>> &mat, int R, int C, int i, int j)
{
    if (i == R && j == C)
    {
        return mat[i][j];
    }
    // ll temp1 = mat[i][j], temp2 = mat[i][j];
    ll temp1 = INT_MIN, temp2 = INT_MIN;
    if (i + 1 <= R)
        temp1 = mat[i][j] + maxSum(mat, R, C, i + 1, j);
    if (j + 1 <= C)
        temp2 = mat[i][j] + maxSum(mat, R, C, i, j + 1);

    ll ans = max(temp1, temp2);
    return ans;
}

void solve()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> mat(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << maxSum(mat, r - 1, c - 1, 0, 0);
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