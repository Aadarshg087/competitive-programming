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

// Approach
/*
- Basic BFS approach. First we inserted all the starting points (intial rotten oranges) into the queue
- Then, we run a BFS and made changes according to the given condition (check if condition)
- Also, we kept a visited vector in order to not traverse the cell again
- In the end, if fresh orages are not equal to the later rotten oranges. That means, there are some oranges which are not reachable. So, we will return -1
- In the end, we will return the total time taken to rotten all the oranges
T.C - O(n * m) + O(n * m * 4)
S.C - O(n * m)
*/

int orangesRotting(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    int vis[n][m];
    queue<pair<pair<int, int>, int>> q;
    int countF = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
            }
            if (grid[i][j] == 1)
                countF++;
            vis[i][j] = 0;
        }
    }
    int time = 0;
    vector<pair<int, int>> coord{{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    int count = 0;
    while (!q.empty())
    {
        auto front = q.front();
        int i = front.first.first;
        int j = front.first.second;
        int t = front.second;
        q.pop();
        time = max(t, time);
        for (auto it : coord)
        {
            int newi = i + it.first;
            int newj = j + it.second;
            if (newi >= 0 && newi < n && newj >= 0 && newj < m && vis[newi][newj] != 2 && grid[newi][newj] == 1)
            {
                vis[newi][newj] = 2;
                count++;
                q.push({{newi, newj}, t + 1});
            }
        }
    }

    if (count != countF)
        return -1;

    return time;
}

int main()
{

    return 0;
}