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

// Brute force might work, but I am gonna try - Got TLE !)
int reversePairs(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            if (nums[i] > (2 * nums[j]))
                count++;
        }
    }
    return count;
}

// Merge Sort Code ----------------------
int merge(vector<int> &v, int l1, int h1, int l2, int h2)
{
    int count = 0;
    int i = l1;
    int j = l2;
    vector<int> ans;
    while (i != h1 + 1 && j != h2 + 1)
    {
        if (v[i] > 2 * 1LL * v[j])
        {
            int t = h1 - i + 1;
            count += t;
            j++;
        }
        else
            i++;
    }

    i = l1;
    j = l2;
    while (i != h1 + 1 && j != h2 + 1)
    {
        if (v[i] <= v[j])
        {
            ans.push_back(v[i++]);
        }
        else
        {
            ans.push_back(v[j++]);
        }
    }
    while (i != h1 + 1)
        ans.push_back(v[i++]);
    while (j != h2 + 1)
        ans.push_back(v[j++]);

    int o = 0;
    for (int k = l1; k <= h2; k++)
    {
        v[k] = ans[o++];
    }
    return count;
}

int merge_Sort(vector<int> &v, int l, int h)
{
    int count = 0;
    if (l >= h)
        return 0;
    int mid = (l + h) / 2;
    count = merge_Sort(v, l, mid);
    count += merge_Sort(v, mid + 1, h);
    count += merge(v, l, mid, mid + 1, h);
    return count;
}

// Maybe we could try divide and conquer something, to reduce the number of comparison
// Maybe some sort of binary search, also we
// we will use merge sort concept just like we used in the count inversion question
int reversePairs1(vector<int> &nums)
{
    int n = nums.size();
    return merge_Sort(nums, 0, n - 1);
}

int main()
{
    // vector<int> v{2, 12, 3, 4, 5};
    // cout << merge(v, 0, 1, 2, 4) << endl;

    // vector<int> v{1, 3, 2, 3, 1};
    vector<int> v{2, 4, 3, 5, 1};
    cout << reversePairs1(v) << endl;

    return 0;
}