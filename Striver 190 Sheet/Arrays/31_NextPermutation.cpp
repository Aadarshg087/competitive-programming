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

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int i = n - 2;
    int j = n - 1;

    while (nums[i] > nums[j])
    {
        if (i == 0)
        {
            j--;
        }
        else
        {
            i--;
        }
    }
    swap(nums[i], nums[j]);
    auto it = nums.begin();
    advance(it, i);
    sort(it, nums.end());
}

int main()
{

    return 0;
}