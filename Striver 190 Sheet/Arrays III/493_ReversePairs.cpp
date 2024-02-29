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

// Brute force might work, but I am gonna try - Got TLE !)
int reversePairs(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            if (nums[i] > (2 * nums[j]))
                count++;
        }
    }
    return count;
}

// Maybe we could try divide and conquer something, to reduce the number of comparison
// Maybe some sort of binary search, also we 
int reversePairs(vector<int> &nums)
{

}

int main()
{

    return 0;
}