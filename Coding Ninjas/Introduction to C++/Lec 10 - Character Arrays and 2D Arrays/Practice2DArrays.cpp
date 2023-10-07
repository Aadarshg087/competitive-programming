#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[][5], int m, int n)
{
    // We sent the total number of columns to navigate in the 1D array that stored in the memory (index = Total columns*i + j)  
    cout << "Printing from the function: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[5][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};
    int m = 5;
    int n = 5;
    cout << "Printing from the main: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printArray(arr, m, n);

    return 0;
}