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
#define ll long long int
void solve(vector<int> &nums, int target, int elements, int i, ll sum)
{
    // Base case
    if (elements == 4 && sum == target)
    {
    }
    if (elements == 4)
    {
        return;
    }
}

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    return solve(nums, target, 0, 0, 0);
}

int main()
{

    return 0;
}