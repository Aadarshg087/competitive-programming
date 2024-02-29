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
int longestConsecutive(vector<int> &nums)
{
    set<int> st;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }
    if (st.size() == 0)
        return 0;
    int count = 1;
    int ans = count;
    for (auto i = st.begin(); i != --st.end(); i++)
    {
        int temp1 = (*i) + 1;
        auto it = i;
        int temp2 = *(++it);
        if (temp1 == temp2)
        {
            count++;
        }
        else
            count = 1;
        ans = max(ans, count);
    }
    return ans;
}

int main()
{

    return 0;
}