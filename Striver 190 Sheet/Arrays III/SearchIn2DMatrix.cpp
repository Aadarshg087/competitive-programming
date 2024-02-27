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

// we have to return a bool value
//  basic method would be O(n^2) - using 2 for loops

bool search(vector<vector<int>> &matrix, int row, int target)
{
    int low = 0;
    int high = matrix[row].size() - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (matrix[row][mid] == target)
        {
            return true;
        }
        if (matrix[row][mid] > target)
        {
            high = mid - 1;
        }
        if (matrix[row][mid] < target)
        {
            low = mid + 1;
        }
    }
    return false;
}
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int i = 0;
    int j = n - 1;
    int col = 0;
    int mid;
    while (i <= j)
    {
        mid = (i + j) / 2;
        int size = matrix[mid].size() - 1;
        if (target >= matrix[mid][col] && target <= matrix[mid][size])
        {
            if (matrix[mid][col] == target || matrix[mid][size] == target)
                return true;
            break;
        }

        if (matrix[mid][col] > target)
        {
            j = mid - 1;
        }
        else if (matrix[mid][col] < target)
        {
            i = mid + 1;
        }
    }
    return search(matrix, mid, target);
}

int main()
{

    return 0;
}