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
- Taking all the elements from the input through addNum function into a vector
- through findMedian, we sorting (asked in the question) and returning the median according to the size
T.C - O(nlogn) + O(nlogn)
S.C -


*/
class MedianFinder
{
public:
    vector<int> v;
    MedianFinder()
    {
    }

    void addNum(int num)
    {
        v.push_back(num);
    }

    double findMedian()
    {
        int n = v.size();
        sort(v.begin(), v.end());
        if (n & 1)
            return (double)v[n / 2];
        else
        {
            return ((double)v[n / 2] + v[n / 2 - 1]) / 2.0;
        }
    }
};

/*
// OPTIMAL APPROACH

- We mantain two pq at breack points (if we were to store in sorted vector)
- Make sure to check for condition and we will simply return the top elements as the mean according to the overall size
- We will max heap in the left cause we will have the max element as top and it will use to calc median
- We will keep the min heap in the right as it will the min element as top and it will be used to calc median acc to size
- Here break point can be visualised if we were to imagine all the elements in the vector and then return the median
- We are keeping the left part in the left_max_heap and right part in the right_min_heap
- Check for the odd even cases and how to manage the insertion of elements

T.C - O(nlogn) overall
S.C - O(n) // for both pq

*/

class MedianFinder
{
public:
    priority_queue<int> left_max_heap;                             // max heap
    priority_queue<int, vector<int>, greater<int>> right_min_heap; // min heap

    MedianFinder()
    {
    }

    void addNum(int num)
    {
        if (left_max_heap.empty() || num <= left_max_heap.top())
        {
            left_max_heap.push(num);
        }
        else
            right_min_heap.push(num);

        if (left_max_heap.size() > right_min_heap.size() + 1)
        {
            int ele = left_max_heap.top();
            left_max_heap.pop();
            right_min_heap.push(ele);
        }
        else if (right_min_heap.size() > left_max_heap.size())
        {
            left_max_heap.push(right_min_heap.top());
            right_min_heap.pop();
        }
    }

    double findMedian()
    {
        int n = left_max_heap.size() + right_min_heap.size();
        if (n & 1)
        {
            return (double)left_max_heap.top();
        }
        else
        {
            return ((double)(left_max_heap.top() + right_min_heap.top()) / 2.0);
        }
    }
};
int main()
{

    return 0;
}