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

// Basic Approach ----------------
/*
- Put all the element into a vector and sort.
- Since all the element will be odd(given condition)
- we could return the location size/2 of the vector created

- T.C - O(R*C) + O((R*C)log(R*C))
- S.C - O(R*C)
*/
int median(vector<vector<int>> &matrix, int R, int C)
{
    vector<int> ans;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            ans.push_back(matrix[i][j]);
        }
    }

    sort(ans.begin(), ans.end());
    return ans[ans.size() / 2];
}

/*
// BETTER APPROACH
- Watch video

T.C - O(log(high)) * O(Rlog(C))
S.C - O(1)
*/

int countSmallerElement(vector<vector<int>> &matrix, int element) //
{
    int count = 0;
    for (int i = 0; i < matrix.size(); i++)
    {
        auto it = upper_bound(matrix[i].begin(), matrix[i].end(), element);
        count += (it == matrix[i].end()) ? (int)matrix[i].size() : it - matrix[i].begin();
    }
    return count;
}

int median(vector<vector<int>> &matrix, int R, int C) // O(R log(C))
{
    int low = INT_MAX;
    int high = INT_MIN;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            low = min(low, matrix[i][j]);
            high = max(high, matrix[i][j]);
        }
    }

    int req = (R * C) / 2;
    while (low <= high) // O(log(high) = log(1e9)
    {
        int mid = (low + high) >> 1;
        int smallerElement = countSmallerElement(matrix, mid);
        if (smallerElement <= req)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}x

int main()
{

    return 0;
}