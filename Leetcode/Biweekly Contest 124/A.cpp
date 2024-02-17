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

int maxOperations(vector<int> &nums)
{
    int n = nums.size();
    if (n == 2)
        return 1;
    int count = 1;
    int sum = nums[0] + nums[1];
    for (int i = 2; i < n - 1; i += 2)
    {
        if (nums[i] + nums[i + 1] == sum)
            count++;
        else
            break;
    }
    return count;
}

int main()
{

    return 0;
}