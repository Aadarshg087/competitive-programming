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

// First Approach -----------------
/*
- Basic traversal with basic pick and non pich apprach
- This approach might take subset with the same set of elements
- To eleminate that case, we have used the set<vector<int>> st
- Also, they have used the sorting for the comparison of vector inside the set
- T.C - {
            O(2^N) + O(2^N * log (2^N)) + O(nlogn)

            functions calls - O(2^N)
            sorting at the base case - O(nlogn)
            insertion in set - O(2^N * log(2^N))
        }
- S.C - {
            O(N) + O(2^N * N) + O(2^N * N)

            temp vector - O(N)
            set<vector<int>> - O(2^N * N)
            vector<vector<int>> - O(2^N * N)
        }
*/
set<vector<int>> st;
void solve(vector<int> &nums, int n, int i, vector<int> temp)
{
    // Base case
    if (i >= nums.size())
    {
        sort(temp.begin(), temp.end()); // used this for set of vector comparison
        st.insert(temp);
        return;
    }

    // Recurrence Relation
    solve(nums, n, i + 1, temp);
    temp.push_back(nums[i]);
    solve(nums, n, i + 1, temp);
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    int n = nums.size();
    vector<int> temp;
    solve(nums, n, 0, temp);
    vector<vector<int>> v(st.begin(), st.end());
    return v;
}

// Second Aproach ----------------------------
/*
- We are using backtracking here, if condition in the for loop is the main one
- Basically, we are only picking the first occurence of every integer
- Make sure to notice the ans vector to manage in the interview


T.C - O(2^N)
S.C - O(N) + O(2^N * N)
*/
void solve(vector<int> &nums, int n, int i, vector<int> temp, vector<vector<int>> &ans)
{
    ans.push_back(temp);
    if (i == n)
        return;

    // Recurrence Relations
    for (int k = i; k < n; k++)
    {
        if (k != i && nums[k] == nums[k - 1])
            continue;
        temp.push_back(nums[k]);
        solve(nums, n, k + 1, temp);
        temp.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> temp;
    vector<vector<int>> ans;
    solve(nums, n, 0, temp, ans);
    return ans;
}

int main()
{

    return 0;
}