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

bool solve(vector<vector<char>> &board, string s, int ind, int i, int j, int r, int c, vector<pair<int, int>> p)
{
    // Base case
    if (ind == s.size())
        return true;

    // Recurrence relation
    if (board[i][j] == s[ind])
    {
        ind++;
    }
    for (auto points : p)
    {
        int p1 = i + points.first;
        int p2 = j + points.second;
        bool ans = 0;
        if (p1 >= 0 && p1 < r && p2 >= 0 && p2 < c)
        {
            ans = solve(board, s, ind, p1, p2, r, c, p);
        }
        if (ans)
            return ans;
    }
}
bool exist(vector<vector<char>> &board, string word)
{
    int r = board.size();
    int c = board[0].size();
    vector<pair<int, int>> p{{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    return solve(board, word, 0, 0, 0, r, c, p);
}
int main()
{

    return 0;
}