#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
            neg.push_back(nums[i]);
    }

    vector<int> ans;
    int j = 0;
    int k = 0;
    for (int i = 0; i < neg.size(); i++)
    {
        if (i & 1)
            ans.push_back(neg[j]);
        else
        {
            if (nums[k] < 0)
            {
                while (nums[k] < 0)
                    k++;
            }
            ans.push_back(nums[k]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}