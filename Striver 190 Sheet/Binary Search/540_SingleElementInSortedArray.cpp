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
- first basic approach would be to check the neighbouring elements
- T.C - O(N)
- S.C - O(1)
*/

int singleNonDuplicate(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];
    for (int i = 1; i < n - 1; i++)
    {
        if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
        {
            return nums[i];
        }
    }
    if (nums[0] != nums[1])
        return nums[0];

    if (nums[n - 2] != nums[n - 1])
        return nums[n - 1];
}

/*
- Second approach would be to XOR all the element as all the elements will there exactly twice except one
- So, XORing would be fine
- T.C - O(N)
- S.C - O(1)
*/

int singleNonDuplicate(vector<int> &nums)
{
    int n = nums.size();
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        XOR ^= nums[i];
    }
    return XOR;
}

/*
- Third Approach would to be to use the binary search

*/
int singleNonDuplicate(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    int j = n - 2;
    while (i <= j)
    {
        int mid = (i + j) >> 1;
        if (nums[mid] == nums[mid ^ 1])
            i = mid + 1;
        else
        {
            j = mid - 1;
        }
    }
    return nums[i];
}

int main()
{

    return 0;
}