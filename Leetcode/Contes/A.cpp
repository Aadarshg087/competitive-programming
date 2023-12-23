#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool valid(vector<int> &nums, int i, int size)
{
    int prev = i;
    for (int j = 0; j <= nums.size() - 1; j++)
    {
        if (j >= i && j <= size)
        {
            continue;
        }
        if (nums[j] >= prev)
        {
            return false;
        }
        prev = nums[j]
    }
    return true;
}

void print(vector<int> &nums)
{
    for (auto i : nums)
        cout << i << " ";
    cout << endl;
}
int incremovable(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            if (valid(nums, i, j))
            {
            }
        }
    }
}

int incremovableSubarrayCount(vector<int> &nums)
{
    return incremovable(nums);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }
    // print(arr);

    cout << incremovableSubarrayCount(arr) << endl;
    return 0;
}