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
    // code here
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



int main()
{

    return 0;
}