#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minPairSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int i = 0;
    int j = nums.size() - 1;
    int maxNum = INT_MIN;
    while (i < j)
    {
        int sum = nums[i] + nums[j];
        maxNum = max(maxNum, sum);
        i++;
        j--;
    }
    return maxNum;
}

int main()
{

    return 0;
}