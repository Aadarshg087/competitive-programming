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

// Basic Approach ------------------------
int findKthLargest(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end(), greater<int>());
    return nums[k - 1];
}

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        pq.push(nums[i]);
    }
    int ans;
    while (k--)
    {
        ans = pq.top();
        pq.pop();
    }
    return ans;
}

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    int n = nums.size();
    for (int i = 0; i < k; i++)
    {
        pq.push(nums[i]);
    }
}

int main()
{

    return 0;
}