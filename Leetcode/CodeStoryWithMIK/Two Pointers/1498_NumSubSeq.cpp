#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
int numSubseq(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int i = 0;
    int j = 0;
    int mini = nums[0];
    int maxi = nums[0];
    int count = 0;
    while (i != n)
    {
        int sum = mini + maxi;
        if (sum <= target)
        {
            count = (count + 1) % M;
            if (abs(i - j) > 1)
                count += (1LL * abs(i - j) - 1) % M;
        }
        else
        {
            j++;
            maxi = nums[j];
        }
        else
        {
            i++;
            mini = nums[i];
        }
    }
    return count;
}

int main()
{
    vector<int> nums{3, 3, 6, 8};
    int target = 10;
    cout << numSubseq(nums, target) << endl;

    return 0;
}