#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/
void call(vector<vector<int>> &ans, int k, int l)
{
    int m = ans.size();
    int n = ans[0].size();
    for (int i = 0; i < m; i++)
    {
        ans[i][l] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        ans[k][i] = 0;
    }
}
void setZeroes(vector<vector<int>> &matrix)
{
    vector<vector<int>> ans = matrix;
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                call(ans, i, j);
            }
        }
    }

    return ans;
}

int main()
{

    return 0;
}