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
// Basic Approach -------------------------------
/*
- set<vector<int>> basically ensure the unique combinations
- Basic base case conditions
- Since, we use on element multiple times, so making three calls - skip, same call, next call
- keeping the track of integers that we have took in the temp variable

T.C - O(target) + O(3^N)
S.C - O(N) + O(target * log(target))
      - if all are ones in the combinations, target size wouild be maximum

*/
set<vector<int>> st;
void solve(vector<int> &c, int t, int i, vector<int> temp, int sum)
{
    // Base Case
    if (sum > t)
        return;

    if (sum == t)
    {
        st.insert(temp);
        return;
    }
    if (i >= c.size())
        return;

    // Recurrence Relation
    solve(c, t, i + 1, temp, sum); // skip
    sum += c[i];
    temp.push_back(c[i]);
    solve(c, t, i, temp, sum);
    solve(c, t, i + 1, temp, sum);
}

vector<vector<int>> combinationSum(vector<int> &c, int t)
{
    int n = c.size();
    vector<int> temp;
    sort(c.begin(), c.end());
    solve(c, t, 0, temp, 0);
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// Better Approach ----------------------------
/*
- Similar to the above one, but we have used the for loop here to try all the valid combinations (also the integers are distinct)
- Make sure about the if condition, also we are making the call again at the same index since we use that same element agaim
- And whenever we our sum is equal to the target, we pushhing the vector into the vector<vector<int>> ans
- T.C - O(2^k) * O(t/2)
- S.C - O(N) + O(t/2 * combinations)

*/
void solve(vector<int> &nums, int n, int i, vector<int> temp, vector<vector<int>> &ans, int sum, int t)
{
    // Base case
    if (sum > t)
        return;

    if (sum == t)
    {
        ans.push_back(temp);
        return;
    }
    if (i >= n)
        return;

    // Recurrence Relation
    for (int k = i; k < n; k++)
    {
        if (sum + nums[k] <= t)
        {
            temp.push_back(nums[k]);
            solve(nums, n, k, temp, ans, sum + nums[k], t);
            temp.pop_back();
        }
    }
}

vector<vector<int>> combinationSum(vector<int> &c, int t)
{
    int n = c.size();
    vector<int> temp;
    sort(c.begin(), c.end());
    vector<vector<int>> ans;
    solve(c, n, 0, temp, ans, 0, t);
    return ans;
}
int main()
{

    return 0;
}