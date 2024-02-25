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

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < m / 2 && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }
        else
        {
            ans.push_back(nums2[j]);
            j++;
        }
    }

    while (i < m / 2)
        ans.push_back(nums1[i++]);

    while (j < n)
        ans.push_back(nums2[j++]);
    nums1 = ans;
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int j = m;
    for (int i = 0; i < n; i++)
    {
        nums1[j++] = nums2[i];
    }

    sort(nums1.begin(), nums1.end());
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums2[j--];
        }
    }
    while (j >= 0)
        nums1[k--] = nums2[j--];
}

int main()
{

    return 0;
}