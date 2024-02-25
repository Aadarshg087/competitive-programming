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
void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> temp(n, vector<int>(n));
    int l = n - 1;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[m][l--] = matrix[j][i];
            if (l == -1)
            {
                m++;
                l = n - 1;
            }
        }
    }
    matrix = temp;
}

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{

    return 0;
}