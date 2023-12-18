#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Approach 1 ---------------- O(n*logn);
int maxProductDifference(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int num1 = nums[0];
    int num2 = nums[1];
    int num3 = nums[n - 2];
    int num4 = nums[n - 1];
    int ans1 = num1 * num2;
    int ans2 = num3 * num4;
    return abs(ans1 - ans2);
}

// Approach 2 -------------------------- O(n);
int maxProductDifference(vector<int> &nums)
{
    int smallest = INT_MAX;
    int secSmallest = INT_MAX;
    int largest = INT_MIN;
    int secLargest = INT_MIN;

    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > largest)
        {
            secLargest = largest;
            largest = nums[i];
        }
        else if (nums[i] > secLargest)
        {
            secLargest = nums[i];
        }

        if (nums[i] < smallest)
        {
            secSmallest = smallest;
            smallest = nums[i];
        }
        else if (nums[i] < secSmallest)
        {
            secSmallest = nums[i];
        }
    }

    return abs((largest * secLargest) - (smallest * secSmallest));
}

int main()
{

    return 0;
}