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

/*
- In this code, we are making calls in all four directions if we get the required conditions
- we have used the visited array to keep a track and temp string for the path
- We are using the backtracking concept for explore all the potential paths.
- Make sure to look for the edge cases.

- T.C - O(4 ^(n*m))
- S.C - O(n * m)
*/




vector<string> v;

void solve(vector<vector<int>> &m, int n, int i, int j, string temp, vector<vector<bool>> visited)
{
    // Base case
    if (i == n - 1 && j == n - 1)
    {
        v.push_back(temp);
        return;
    }

    visited[i][j] = 1;
    // recurrence relation
    if (i == 0 && j == 0)
    {
        if (m[i + 1][j] != 0)
        {
            temp += 'D';
            solve(m, n, i + 1, j, temp, visited);
            temp.pop_back();
        }
        if (m[i][j + 1] != 0)
        {
            temp += 'R';
            solve(m, n, i, j + 1, temp, visited);
            temp.pop_back();
        }
    }
    else
    {
        if (!temp.empty() && temp.back() != 'U' && i + 1 < n && m[i + 1][j] != 0 && visited[i + 1][j] != 1)
        {
            temp += 'D';
            solve(m, n, i + 1, j, temp, visited);
            temp.pop_back();
        }
        if (!temp.empty() && temp.back() != 'D' && i - 1 >= 0 && m[i - 1][j] != 0 && visited[i - 1][j] != 1)
        {
            temp += 'U';
            solve(m, n, i - 1, j, temp, visited);
            temp.pop_back();
        }
        if (!temp.empty() && temp.back() != 'R' && j - 1 >= 0 && m[i][j - 1] != 0 && visited[i][j - 1] != 1)
        {
            temp += 'L';
            solve(m, n, i, j - 1, temp, visited);
            temp.pop_back();
        }
        if (!temp.empty() && temp.back() != 'L' && j + 1 < n && m[i][j + 1] != 0 && visited[i][j + 1] != 1)
        {
            temp += 'R';
            solve(m, n, i, j + 1, temp, visited);
            temp.pop_back();
        }
    }
    visited[i][j] = 0;
    return;
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    // Your code goes here
    string temp = "";
    if (v[0][0] == 0)
        return v;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    solve(m, n, 0, 0, temp, visited);
    return v;
}

int main()
{

    return 0;
}