#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#include using namespace std; int board[11][11]; bool isPossible(int n, int row, int col) { 
    // Same Column
for (int i = row - 1; i >= 0; i--)
{
    if (board[i][col] == 1)
    {
        return false;
    }
}
// Upper Left Diagonal
for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
{
    if (board[i][j] == 1)
    {
        return false;
    }
}
// Upper Right Diagonal
  for(int i=row-1,j=col+1;i>=0 && j



void function1(int arr[], int n)
{
    arr[1] = 1;
}

void function2(int *arr, int n)
{
    arr[2] = 2;
}

int main()
{
    int n = 10;
    int arr[n] = {0};

    // Before passing in the function
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // function1(arr, n);
    function2(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}