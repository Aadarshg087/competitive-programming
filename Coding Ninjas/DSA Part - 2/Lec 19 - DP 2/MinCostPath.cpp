#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Memoization
int minCostPath_helper2(int **input, int m, int n, int i, int j, int **output)
{
    // Base Case
    if (i == m - 1 && j == n - 1)
    {
        return input[i][j];
    }

    if (i >= m || j >= n)
    {
        return INT_MAX;
    }

    // Checking whether the answer is there or not
    if (output[i][j] != -1)
    {
        return output[i][j];
    }

    // Recursive Calls
    int x = minCostPath_helper(input, m, n, i, j + 1);
    int y = minCostPath_helper(input, m, n, i + 1, j + 1);
    int z = minCostPath_helper(input, m, n, i + 1, j);

    // Small calculation
    int ans = min(x, min(y, z)) + input[i][j];

    // Saving the ans for future use
    output[i][j] = ans;

    return ans;
}

// Brute Force Approach - O(3^n)
int minCostPath_helper(int **input, int m, int n, int i, int j)
{
    // Base Case
    if (i == m - 1 && j == n - 1)
    {
        return input[i][j];
    }

    if (i >= m || j >= n)
    {
        return INT_MAX;
    }

    // Recursive Calls
    int x = minCostPath_helper(input, m, n, i, j + 1);
    int y = minCostPath_helper(input, m, n, i + 1, j + 1);
    int z = minCostPath_helper(input, m, n, i + 1, j);

    // Small calculation
    int ans = min(x, min(y, z)) + input[i][j];
    return ans;
}

int minCostPath(int **input, int m, int n)
{
    minCostPath_helper(input, m, n, 0, 0);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << minCostPath(arr, m) << endl;

    return 0;
}