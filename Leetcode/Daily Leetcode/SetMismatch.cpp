#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int> &nums)
{
    vector<int> v;
    sort(nums.begin(), nums.end());
    int sum = 0;
    int n = nums.size();
    int j = 1;
    int totalSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1])
        {
            v.push_back(nums[i + 1]);
            v.push_back(i + 2);
            break;
        }
    }
    return v;
}

int main()
{

    return 0;
}