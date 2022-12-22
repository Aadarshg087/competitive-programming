#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nRows, mCols;
    cin >> nRows >> mCols;
    int input[nRows][mCols];
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> input[i][j];
        }
    }

    int j = 0;
    for (int i = 0; i < mCols; i++)
    {
        while (j < nRows)
        {
            if (j == nRows - 1 && i % 2 == 0)
            {
                cout << input[j][i] << " ";
                i++;
            }
            else if (i % 2 == 0 && j != 0)
            {
                cout << input[j][i] << " ";
                j++;
            }
            else if (i % 2 != 0 && j != 0)
            {
                cout << input[j][i] << " ";
                j--;
            }
            else if (j == 0 && i % 2 != 0)
            {
                cout << input[j][i] << " ";
                i++;
            }
            else
            {
                cout << input[j][i] << " ";
                j++;
            }
        }
    }

    return 0;
}