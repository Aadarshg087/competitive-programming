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
    int index = -1;
    for (int i = n - 2; i >= 0; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    int minElementIndex = index + 1;
    for (int i = index + 1; i < n; i++)
    {
        if (nums[minElementIndex] < nums[i])
        {
            minElementIndex = i;
        }
    }

    swap(nums[index], nums[minElementIndex]);
    sort(nums.begin() + index + 1, nums.end());
}

int main()
{

    return 0;
}