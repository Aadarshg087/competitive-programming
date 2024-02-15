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
class KthLargest
{
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int K = 1;
    KthLargest(int k, vector<int> &nums)
    {
        int n = nums.size();
        K = k;
        for (int i = 0; i < n; i++)
        {
            pq.push(nums[i]);
            if (pq.size() > k)
                pq.pop();
        }
    }

    int add(int val)
    {
        pq.push(val);
        if (pq.size() > K)
            pq.pop();
        int ans = pq.top();
        // pq.pop();
        return ans;
    }
};

int main()
{

    return 0;
}