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


/*
BRUTE FORCE
- Simply sort the element in desc order and return k - 1 position for the k largest element in vector
T.C - O(nlogn)
S.C - O(1)
*/
int findKthLargest(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end(), greater<int>());
    return nums[k - 1];
}

/*
OPTIMAL APPROACH
- Simply insert the elements in to min pq and make sure keep size of the pq not greater than k
- Now, while maintaining this size it will pop the min elements from the pq and will left with k large elemetns
- Since, this is min heap, largest element will be in the bottum and kth largest will at the top
- Simply return pq.top()

T.C - O(nlogk)
S.C - O(k)
*/

int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
        if (pq.size() > k)
            pq.pop();
    }

    return pq.top();
}


int main()
{

    return 0;
}