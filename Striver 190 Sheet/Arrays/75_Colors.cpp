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
void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            count0++;
        if (nums[i] == 1)
            count1++;
        if (nums[i] == 2)
            count2++;
    }
    int i = 0;
    while (count0--)
    {
        nums[i] = 0;
        i++;
    }

    while (count1--)
    {
        nums[i] = 1;
        i++;
    }

    while (count2--)
    {
        nums[i] = 2;
        i++;
    }
}

int main()
{

    return 0;
}