#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void wavePrint(int input[][4], int nRows, int mCols)
{
    for (int i = 0; i < mCols; i++)
    {
        int j;
        if (i % 2 == 0)
        {
            j = 0;
            while (j < nRows)
            {
                cout << input[j][i] << " ";
                j++;
            }
        }
        else
        {
            j = nRows - 1;
            while (j >= 0)
            {
                cout << input[j][i] << " ";
                j--;
            }
        }
        // for (; j < nRows; j++)
        // {
        //     if (j == nRows - 1)
        //     {
        //     }
        //     cout << input[j][i] << " ";
        // }
    }
}

int main()
{
    int nRows, mCols;
    cin >> nRows >> mCols;
    int input[nRows][mCols];

    // Inserting the values
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> input[i][j];
        }
    }

    // Main Code
    for (int i = 0; i < mCols; i++)
    {
        int j;
        if (i % 2 == 0)
        {
            j = 0;
            while (j < nRows)
            {
                cout << input[j][i] << " ";
                j++;
            }
        }
        else
        {
            j = nRows - 1;
            while (j >= 0)
            {
                cout << input[j][i] << " ";
                j--;
            }
        }
    }

    return 0;
}