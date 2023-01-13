// Need to work on that more

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nRows, mCols;
    cin >> nRows >> mCols;
    int input[nRows][mCols];

    // Inserting values in the 2D array
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> input[i][j];
        }
    }

    int col_start = 0;
    int col_end = mCols - 1;

    int row_start = 0;
    int row_end = nRows - 1;

    int count = 1;
    while (count <= (nRows * mCols))
    {
        if (nRows == 1)
        {
            for (int i = row_start; i <= row_end; i++)
            {
                for (int j = col_start; j <= col_end; j++)
                {
                    cout << input[i][j] << " ";
                    count++;
                }
            }
        }
        else if (mCols == 1)
        {
            for (int i = row_start; i <= row_end; i++)
            {
                for (int j = col_start; j <= col_end; j++)
                {
                    cout << input[i][j] << " ";
                    count++;
                }
            }
        }
        else
        {
            for (int i = row_start; i <= row_start; i++)
            {
                for (int j = col_start; j <= col_end; j++)
                {
                    cout << input[i][j] << " ";
                    count++;
                }
            }
            row_start++;

            for (int i = row_start; i <= row_end; i++)
            {
                for (int j = col_end; j <= col_end; j++)
                {
                    cout << input[i][j] << " ";
                    count++;
                }
            }
            col_end--;

            for (int i = row_end; i <= row_end; i++)
            {
                for (int j = col_end; j >= col_start; j--)
                {
                    cout << input[i][j] << " ";
                    count++;
                }
            }
            row_end--;

            for (int i = row_end; i >= row_start; i--)
            {
                for (int j = col_start; j <= col_start; j++)
                {
                    cout << input[i][j] << " ";
                    count++;
                }
            }
            col_start++;
        }
    }

    return 0;
}