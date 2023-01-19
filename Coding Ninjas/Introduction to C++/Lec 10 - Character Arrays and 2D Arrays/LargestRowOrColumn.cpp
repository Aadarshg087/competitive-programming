#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void findLargest(int input[][100], int nRows, int mCols)
{
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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

        // findLargest(input, nRows, mCols);

        int largest_rows = -2147483648;
        int largest_columns = -2147483648;
        int largest_column_index;
        int largest_row_index;

        // finding the largest sum (row-wise)
        for (int i = 0; i < nRows; i++)
        {
            int row_sum = 0;
            int row_index;
            for (int j = 0; j < mCols; j++)
            {
                row_sum = row_sum + input[i][j];
                row_index = i;
            }
            if (row_sum > largest_rows)
            {
                largest_rows = row_sum;
                largest_row_index = row_index;
            }
        }

        // finding the largest sum (column-wise)
        for (int i = 0; i < mCols; i++)
        {
            int column_index;
            int column_sum = 0;
            for (int j = 0; j < nRows; j++)
            {
                column_sum = column_sum + input[j][i];
                column_index = i;
            }
            if (column_sum > largest_columns)
            {
                largest_columns = column_sum;
                largest_column_index = column_index;
            }
        }

        if (largest_columns > largest_rows)
        {
            cout << "column " << largest_column_index << " " << largest_columns << endl;
        }
        else
        {
            cout << "row " << largest_row_index << " " << largest_rows << endl;
        }
    }

    return 0;
}