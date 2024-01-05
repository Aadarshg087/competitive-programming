#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// TC = O(N * log N) - N binary searches of O(log N) each
// SC = O(N)

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> temp;
        temp.push_back(nums[0]);
        int l = 1; // len = 1 as we pushed nums[0]
        // LOGIC : Create a temp array that adds elements if greater than the last element, and if not, overwrites smallest greater element. NOTE : temp does not store the longest increasing subsequence, we are just utilizing the length of temp to get our answer.
        for (int i = 1; i < nums.size(); i++)
        {
            if (temp.back() < nums[i])
            { // If nums[i] is greater, just add it at the back
                temp.push_back(nums[i]);
                l++;
            }
            else
            {
                // If not, just replace the smallest element greater than nums[i] with nums[i]
                int ind = lower_bound(temp.begin(), temp.end(), nums[i]) - temp.begin();
                // inbuilt c++ function to perform binary search O(log N) to search for the third parameter in the array or element just greater than it. Do - temp.begin() to get an integer index value
                temp[ind] = nums[i];
            }
        }
        return l;
    }
};

// ---------- Memoization ----------------------------

int t[2501][2501];
int solve(vector<int> &nums, int i, int prev)
{
    if (i >= nums.size())
        return 0;

    // DP
    if (prev != -1 && t[i][prev] != -1)
    {
        return t[i][prev];
    }
    int take = 0;
    if (prev == -1 || nums[i] > nums[prev])
        take = 1 + solve(nums, i + 1, i);

    int skip = solve(nums, i + 1, prev);

    if (prev != -1)
    {
        t[i][prev] = max(take, skip);
    }

    return max(skip, take);
}

int lengthOfLIS(vector<int> &nums)
{
    memset(t, -1, sizeof(t));
    return solve(nums, 0, -1);
}

int main()
{

    return 0;
}