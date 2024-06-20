#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

// BRUTE FORCE
/*
- Basic linear search approach. Pick one element from the nums1 and search the next greater elements from the right in the nums2 array. If found, before the elements, add to the answer vector otherwise add -1 to the answer vector
- T.C - O(n * m) where m is the treverse lenght we need to do from the right in nums2
- S.C - O(1)
*/

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans(nums1.size());
    for (int i = 0; i < nums1.size(); i++)
    {
        int ele = -1;
        for (int j = nums2.size() - 1; j >= 0; j++)
        {
            if (nums1[i] == nums2[j])
                break;
            else if (nums2[j] > nums1[i])
                ele = nums2[j];
        }
        ans[i] = ele;
    }

    return ans;
}

// OPTIMAL APPROACH
/*
- Used the stack to maintaining it in the incresaing seq from top to bottom while traversing from right to left (cause asked right next greater element)
T.C - O(n) + O(n) + O(n)
S.C - O(n) + O(n) + O(n)
*/

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums2.size();
    vector<int> ans(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        if (st.empty())
        {
            ans[i] = -1;
            st.push(nums2[i]);
        }
        else if (st.top() <= nums2[i])
        {
            while (!st.empty() && st.top() <= nums2[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                ans[i] = -1;
                st.push(nums2[i]);
            }
            else
            {
                ans[i] = st.top();
                st.push(nums2[i]);
            }
        }
        else
        {
            ans[i] = st.top();
            st.push(nums2[i]);
        }
    }
    unordered_map<int, int> mp;
    vector<int> res(nums1.size());
    for (int i = 0; i < nums1.size(); i++)
    {
        mp[nums1[i]] = i;
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        if (mp.find(nums2[i]) != mp.end())
        {
            auto it = mp.find(nums2[i]);
            res[it->second] = ans[i];
        }
    }
    return res;
}

int main()
{

    return 0;
}