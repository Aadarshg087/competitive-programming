#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input[100][100];
    int row, col;
    cin >> row >> col;
    int freq = row;

    // Taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> input[i][j];
        }
    }

    int curr_row = 0;
    int count = row - 1;
    while (freq > 0)
    {
        for (int i = 0; i < col; i++)
        {
            cout << input[curr_row][i] << " ";
        }
        cout << endl;
        if (freq == 1)
        {
            freq = count;
            count--;
            curr_row++;
        }
        else
        {
            freq--;
        }
    }

    return 0;
}