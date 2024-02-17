#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> answer(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            answer[i][j] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int maxE = INT_MIN;
        pair<int, int> p = {-1, -1};
        bool check = false;
        for (int j = 0; j < m; j++)
        {

            maxE = max(maxE, matrix[j][i]);
            if (matrix[j][i] == -1)
            {
                p = {j, i};
                check = true;
            }
        }
        // cout << endl;
        // if (i == 0)
        //     cout << maxE << endl;
        if (check)
        {
            for (int k = 0; k < m; k++)
            {
                if (answer[k][i] == -1)
                    answer[k][i] = maxE;
            }
        }
    }

    return answer;
}

int main()
{
    vector<vector<int>> v = {{-1, 0, 0, 2, 2}, {2, 0, 0, 2, 1}, {4, 3, 2, 1, 1}, {-1, -1, 0, 2, 4}, {1, 0, 3, -1, 0}};
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    vector<vector<int>> ans = modifiedMatrix(v);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}