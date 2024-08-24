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

vector<int> medianSlidingWindow(vector<int> &nums, int k)
{
    int n = nums.size();
    multiset<double> low;
    multiset<double> high;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        low.insert(nums[i]);
        high.insert(*low.rbegin());
        low.erase(low.find(*low.rbegin()));

        if (low.size() < high.size())
        {
            low.insert(*high.begin());
            high.erase(high.find(*high.begin()));
        }
        if (i >= k - 1)
        {
            if (k & 1)
                ans.push_back(*low.rbegin());
            else
                ans.push_back(min(*low.rbegin(), *high.begin()));

            if (low.find(nums[i - k + 1]) != low.end())
                low.erase(low.find(nums[i - k + 1]));
            else
                high.erase(high.find(nums[i - k + 1]));
        }
    }

    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> ans = medianSlidingWindow(v, k);
    for (auto it : ans)
        cout << it << " ";
    cout << endl;

    return 0;
}