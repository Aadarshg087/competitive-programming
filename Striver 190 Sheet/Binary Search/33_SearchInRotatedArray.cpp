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

/*
- Bsically, we have to find the target in the nums
- but in log(n) time complexty
- The brute force approach would be to do a linear search
*/
int search(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// Better Approach ------------------
/*
-
*/


int search(vector<int> &nums, int target)
{
    int n = nums.size();
    
}

int main()
{

    return 0;
}