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
int majorityElement(vector<int> &nums)
{
    // Moove's Voting Algorithm
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n / 2];
}

int majorityElement(vector<int> &nums)
{
    // Moove Voting Algo
    int count = 0;
    int n = nums.size();
    int el;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            el = nums[i];
        }
        else if (nums[i] == el)
            count++;
        else
            count--;
    }
    return el;
}
int main()
{

    return 0;
}