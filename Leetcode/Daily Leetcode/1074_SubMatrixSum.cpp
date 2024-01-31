#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int numSubmatrixSumTarget(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            matrix[i][j] += matrix[i][j - 1];
        }
    }

    int res = 0;
    for (int i = 0; i < cols; i++)
    {
        for (int j = i; j < cols; j++)
        {
            unordered_map<int, int> mp;
            mp.insert({0, 1});
            int currSum = 0;
            for (int k = 0; k < rows; k++)
            {
                currSum += matrix[k][j] - (i > 0 ? matrix[k][i - 1] : 0);
                if (mp.find(currSum - target) != mp.end())
                {
                    res += mp[currSum - target];
                }
                mp[currSum]++;
            }
        }
    }
    return res;
}

int main()
{

    return 0;
}