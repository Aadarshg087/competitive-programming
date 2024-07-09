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


// Approach
/*
- Could be done in many ways but, priority queue one is the best it offers better complexity
- We are mainting the min heap (so that we could remove min element, remaining will be largest) of k size
- simple return pq.top();

T.C - O(klogk)
SC. - O(k)
*/
class KthLargest
{
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> pq;
    KthLargest(int k, vector<int> &nums)
    {
        this->k = k;
        for (int i : nums)
        {
            pq.push(i);
            if (pq.size() > k)
                pq.pop();
        }
    }

    int add(int val)
    {
        pq.push(val);
        if (pq.size() > k)
            pq.pop();
        return pq.top();
    }
};

int main()
{

    return 0;
}