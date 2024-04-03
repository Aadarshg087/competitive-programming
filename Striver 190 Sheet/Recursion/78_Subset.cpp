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

// Basic Appraoch ---------------------------
/*
- Basic pick and non pick approach
- And eventually putting them in a vector of vector
- Since, end node of recursion will cover all the possible combinations/subsets
- T.C - O(2^N)
- S.C - {
            O(N) - Stack Space
            O(N) - temp vector
            O(2^N * N) - total subset with the max size of each (ans variable space)
        }
*/

vector<vector<int>> ans;
void solve(vector<int> &nums, int n, int i, vector<int> temp)
{
    if (i == n)
    {
        ans.push_back(temp);
        return;
    }

    // Recurrence Relation
    solve(nums, n, i + 1, temp);
    temp.push_back(nums[i]);
    solve(nums, n, i + 1, temp);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> temp;
    int n = nums.size();
    solve(nums, n, 0, temp);

    return ans;
}

int main()
{

    return 0;
}