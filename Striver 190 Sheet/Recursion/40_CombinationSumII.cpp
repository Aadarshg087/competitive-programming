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

// Brute force Approach --------------------------
/*
- My very first approach, got memory limit exceeded. Make sure to check the input size.
- If it's low enought this would work (around 30 (c.size()))
- kind of very naive approach, when you don't how to navigate
*/
set<vector<int>> st;
void solve(vector<int> &c, int t, int i, int sum, vector<int> temp)
{
    // Base case
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
    // for (int k = i; k < (int)c.size(); k++)
    // {
    // }
    solve(c, t, i + 1, sum, temp);
    temp.push_back(c[i]);
    solve(c, t, i + 1, sum + c[i], temp);
}

vector<vector<int>> combinationSum2(vector<int> &c, int t)
{
    int n = c.size();
    vector<int> temp;
    int sum = 0;
    sort(c.begin(), c.end());
    solve(c, t, 0, sum, temp);
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// Better Approach ----------------------------
/*
- Simple base conditions, main is recurrence relation. We have sorted the array first
- Here, in the if condition of for loop, we make sure that we will not check the similar elements. Only picking it for the first time
- then, checking for the target sum condition and taking care of the temp vector. (push and pop for combinations of current state)

- T.C - O(NLogN) + O(N * target/2)
- S.C - O(N) + O(N * k) where k is the combinations of the target sum
*/

void solve(vector<int> &c, int t, int i, int sum, vector<int> temp, vector<vector<int>> &ans)
{
    // Base case
    if (sum > t)
        return;
    if (sum == t)
    {
        ans.push_back(temp);
        return;
    }
    if (i >= c.size())
        return;

    // Recurrence Relation
    for (int k = i; k < (int)c.size(); k++)
    {
        if (k != i && c[k] == c[k - 1])
            continue;
        if (sum + c[k] <= t)
        {
            temp.push_back(c[k]);
            solve(c, t, k + 1, sum + c[k], temp, ans);
            temp.pop_back();
        }
    }
}

vector<vector<int>> combinationSum2(vector<int> &c, int t)
{
    int n = c.size();
    vector<int> temp;
    int sum = 0;
    sort(c.begin(), c.end());
    vector<vector<int>> ans;
    solve(c, t, 0, sum, temp, ans);
    return ans;
}
int main()
{

    return 0;
}