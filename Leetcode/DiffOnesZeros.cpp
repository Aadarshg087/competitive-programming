#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid)
{
    vector<pair<int, int>> rows(grid.size());
    vector<pair<int, int>> cols(grid[0].size());

    for (int row = 0; row < grid.size(); row++)
    {
        for (int col = 0; col < grid[row].size(); col++)
        {
            if (grid[row][col] == 0)
            {
                rows[row].first++;
                cols[col].first++;
            }
            if (grid[row][col] == 1)
            {
                rows[row].second++;
                cols[col].second++;
            }
        }
    }

    vector<vector<int>> diff(grid.size(), vector<int>(grid[0].size(), 0));
    for (int i = 0; i < diff.size(); i++)
    {
        for (int j = 0; j < diff[i].size(); j++)
        {
            int ans = rows[i].second + cols[j].second - rows[i].first - cols[j].first;
            diff[i][j] = ans;
        }
    }

    return diff;
}

int main()
{

    return 0;
}