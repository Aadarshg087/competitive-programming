#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*

* 0 0 0 0
0 0 1 0 1
1 0 1 0 0
0 0 0 0 1
0 1 0 0 9

*/
vector<pair<int, int>> c{{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
bool visited[100][100];
int ratMaze(vector<vector<int>> &m, int i, int j)
{
    if (i >= m.size() || i < 0 || j >= m[0].size() || j < 0)
    {
        return 0;
    }
    visited[i][j] = true;
    if (m[i][j] == 9)
    {
        cout << "yes" << endl;
        return 1;
    }

    int ans = 0;
    for (auto it : c)
    {
        int c1 = i + it.first;
        int c2 = j + it.second;
        if (m[c1][c2] == 0 && visited[c1][c2] == false)
        {
            ans += ratMaze(m, c1, c2);
        }
    }
    return ans;
}

int main()
{
    memset(visited, false, sizeof(visited));
    vector<vector<int>> m{
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 1},
        {1, 0, 1, 0, 0},
        {0, 0, 0, 0, 1},
        {0, 1, 0, 0, 9}};

    cout << ratMaze(m, 0, 0) << endl;
    return 0;
}
