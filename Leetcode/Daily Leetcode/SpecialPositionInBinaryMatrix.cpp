#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numSpecial(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    int count = 0;
    vector<int> rowArr(m, 0);
    vector<int> colArr(n, 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
            {
                rowArr[i]++;
                colArr[j]++;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1 && rowArr[i] == 1 && colArr[j] == 1)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{

    return 0;
}