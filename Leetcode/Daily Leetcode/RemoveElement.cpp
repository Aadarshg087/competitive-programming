#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
int removeElement(vector<int> &nums, int val)
{
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
            v.push_back(nums[i]);
    }
    nums = v;

    return v.size();
}

int main()
{

    return 0;
}