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

// Brute force
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int p = 1;
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            p *= nums[j];
        }
        ans.push_back(p);
    }

    return ans;
}
// Better approach
vector<int> productExceptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> left(n + 1, 1);
    vector<int> right(n + 1, 1);

    for (int i = 1; i < n + 1; i++)
    {
        if (i == 1)
        {
            left[i] = 1;
            continue;
        }
        left[i] = left[i - 1] * nums[i - 2];
    }

    for (int i = n; i >= 1; i--)
    {
        if (i == n)
        {
            right[i] = 1;
            continue;
        }
        right[i] = right[i + 1] * nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        nums[i] = right[i] * left[i];
    }

    return nums;
}

// Optimal approach
vector<int> productExceptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans;
    int p = 1;
    int x = 1;
    // Counting the number of zeroes
    int count = 0;
    // if count > 1, then the whole array would be zero
    // otherwise, it will work according to the condition
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            count++;
            continue;
        }
        p *= nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (count >= 1 && nums[i] != 0)
        {
            nums[i] = 0;
        }
        else if (nums[i] == 0 && count == 1)
        {
            nums[i] = p;
        }
        else if (nums[i] == 0 && count > 1)
        {
            nums[i] = 0;
        }
        else if (nums[i] < 0)
        {
            int temp = p / abs(nums[i]);
            temp *= -1;
            nums[i] = temp;
        }
        else
        {
            int temp = p / nums[i];
            nums[i] = temp;
        }
    }
    return nums;
}

// Optimal Approach
vector<int> productExceptSelf(vector<int> nums)
{
    int n = nums.size();
}

int main()
{

    return 0;
}