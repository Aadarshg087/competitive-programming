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
vector<int> twoSum(vector<int> &nums, int target)
{
    // First approach would be using two for loops
    // Second approach would be using hash maps. Finding the other operand with the current one
    // Third approach would be using two pointer. But we have to sort the array first
    // This would also not work since we are gonna lose the indices (can use pair for that but T.C and S.C stay same)
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    ll sum = nums[i] + nums[j];
    vector<int> ans;
    while (i < j)
    {
        if (sum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
        }
        if (sum > target)
        {
            j--;
        }
        else
            i++;
    }

    return ans;
}

int main()
{

    return 0;
}