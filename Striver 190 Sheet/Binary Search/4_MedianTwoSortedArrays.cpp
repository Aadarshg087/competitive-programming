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

// Basic Approach -----------------------------------
/*
- Transfer them into one array and sort
- return n/2 if odd otherwise sum of the middle elements divided by 2
- T.C - O(N) + O(NlogN)
- S.C - O(N)
*/

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    for (int i : nums2)
    {
        nums1.push_back(i);
    }

    sort(nums1.begin(), nums1.end());

    int n = nums1.size();
    if (n & 1)
    {
        return (double)nums1[n / 2];
    }
    else
    {
        double ans = 0;
        int f = nums1[(n / 2) - 1];
        int s = nums2[(n / 2)];
        ans = ((double)f + s) / 2;
        return ans;
    }
}

// Better Approach -------------------------
/*
- We creating a new array until we find the median. Using the merge sort technique to insert the element till mid point
- Then, returning the median based on the overall size of both array (even and odd conditions);
- T.C - O(N)
- S.C - O(N)
*/
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size() + nums2.size();
    int mid = n / 2; // here we found the location for 0 based indexing
    mid++;           // no of element we need
    int i = 0;
    int j = 0;
    vector<int> v;
    while (mid && i < nums1.size() && nums2.size())
    {
        if (nums1[i] > nums2[j])
        {
            v.push_back(nums2[j++]);
        }
        else
            v.push_back(nums1[i++]);
        mid--;
    }
    while (mid && i < nums1.size())
    {
        mid--;
        v.push_back(nums1[i++]);
    }
    while (mid && j < nums2.size())
    {
        mid--;
        v.push_back(nums2[j++]);
    }

    double ans = 0;
    if (n & 1)
    {
        return (double)v.back();
    }
    else
    {
        int size = v.size();
        ans = ((double)v[size - 1] + v[size - 2]) / 2;
        return ans;
    }
    return -1;
}

// Optimal Approach --------------------------------
/*
- This is approach is based on the binary search
*/

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    
}

int main()
{

    return 0;
}