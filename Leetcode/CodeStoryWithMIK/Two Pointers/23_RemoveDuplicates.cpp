#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int j = 0;
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] != nums[i])
        {
            nums[++j] = nums[i];
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> nums{1, 1, 2, 3, 4, 4, 4, 5, 5, 5, 6, 7, 8};
    cout << removeDuplicates(nums) << endl;

    return 0;
}