#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int arr[101][101];
int solve(vector<vector<int>> &matrix, int i, int j)
{
    // Base case
    if (i == matrix.size() - 1)
    {
        return matrix[i][j];
    }
    if (arr[i][j] != INT_MAX)
        return arr[i][j];

    int ans1 = INT_MAX, ans2 = INT_MAX, ans3 = INT_MAX;
    if (j == 0)
    {
        ans1 = matrix[i][j] + min(solve(matrix, i + 1, j), solve(matrix, i + 1, j + 1));
    }
    else if (j == matrix[0].size() - 1)
    {
        ans2 = matrix[i][j] + min(solve(matrix, i + 1, j - 1), solve(matrix, i + 1, j));
    }
    else
    {
        ans3 = matrix[i][j] + min(min(solve(matrix, i + 1, j + 1), solve(matrix, i + 1, j)), solve(matrix, i + 1, j - 1));
    }
    int mainAns = min(ans1, min(ans2, ans3));
    return arr[i][j] = mainAns;
}

int minFallingPathSum(vector<vector<int>> &matrix)
{
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            arr[i][j] = INT_MAX;
        }
    }
    int minAns = INT_MAX;
    for (int j = 0; j < matrix.size(); j++)
    {
        int temp = solve(matrix, 0, j);
        minAns = min(temp, minAns);
    }
    return minAns;
}

int main()
{

    return 0;
}