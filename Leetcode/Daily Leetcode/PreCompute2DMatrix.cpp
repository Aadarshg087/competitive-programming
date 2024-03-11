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

int main()
{
    int r = 3;
    int c = 2;
    vector<vector<int>> v(r, vector<int>(c));
    int t = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            v[i][j] = t++;
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int rows = v.size();
    int cols = v[0].size();
    vector<vector<int>> p(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            p[i][j] = v[i][j];
            if (i - 1 >= 0)
            {
                p[i][j] += p[i - 1][j];
            }
            if (j - 1 >= 0)
            {
                p[i][j] += p[i][j - 1];
            }
            if (i - 1 >= 0 && j - 1 >= 0)
            {
                p[i][j] -= p[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}