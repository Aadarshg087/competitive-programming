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


// BRUTE FORCE
/*
- Used the multi set to store the similar values and first insert max value in k elements 
- Then, applied the check and insert incrementally into it and added max values in the ans vector
T.C - (n - k)log(n - k)
S.C - O(k)

*/

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> ans;
    int j = 0;
    int maxi = 0;
    multiset<int> st;
    while (j < k)
    {
        st.insert(nums[j]);
        j++;
    }
    ans.push_back(*st.rbegin());

    int i = 0;
    int n = nums.size();
    while (j < n)
    {
        st.insert(nums[j]);
        st.erase(st.find(nums[i]));
        ans.push_back(*st.rbegin());
        j++;
        i++;
    }
    return ans;
}

int main()
{

    return 0;
}