#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> v(2, -1);
    int start = -1;
    int end = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (start == -1 && nums[i] == target)
        {
            start = i;
            end = i;
        }
        else if (nums[i] == target)
        {
            end = i;
        }
    }

    v[0] = start;
    v[1] = end;

    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    int target;
    cin >> target;

    vector<int> ans = searchRange(v, target);

    for (auto element : ans)
    {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}