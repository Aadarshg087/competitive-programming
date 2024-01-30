#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> c{{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int t[6][6];
int helper(vector<vector<int>> &m, int i, int j)
{
    if (i >= m.size() || i < 0 || j >= m[0].size() || j < 0)
    {
        return 0;
    }
    if (t[i][j] != -1)
        return t[i][j];

    int ans = 1;
    bool check = false;
    for (auto it : c)
    {
        int c1 = i + it.first;
        int c2 = j + it.second;

        if (c1 < m.size() && c1 >= 0 && c2 < m[0].size() && c2 >= 0)
        {
            if (m[c1][c2] == m[i][j] + 1)
            {
                cout << m[i][j] << " " << m[c1][c2] << endl;

                ans += helper(m, c1, c2);
                check = true;
            }
        }
    }

    return t[i][j] = ans;
}

int maxIncreasingSeq(vector<vector<int>> &m)
{
    int ans = 0;
    memset(t, -1, sizeof(t));
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[0].size(); j++)
        {
            ans = max(helper(m, i, j), ans);
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> m{{3, 2, 0},
                          {4, 1, 7},
                          {8, 5, 9},
                          {10, 7, 6}};

    // vector<vector<int>> p{{1, 2, 3},
    //                       {6, 5, 4},
    //                       {7, 8, 9},
    //                       {10, 11, 12},
    //                       {13, 14, 15}};

    cout << maxIncreasingSeq(m);

    return 0;
}