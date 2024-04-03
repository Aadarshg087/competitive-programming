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
---------------- Idea ---------------------
- "123 - 213 - 231 - 312 - 321"
- We are generating all the permutations of the number of size n
- Eventually, sorting it and returning the k - 1 element
- But this is a TLE solution on leetcode
- T.C - O(N!) * O(N) + O(N!* logN!) (other N is for the addition of temp into ans (deep copy))
- S.C - O(N) + O(N! * N)
        size of temp + (total possible permuations * size of each temp)

*/
void solve(int n, int k, vector<string> &ans, vector<int> temp, string t)
{
    // Base case
    if (t.size() == n)
    {
        ans.push_back(t);
        return;
    }

    // Recurrence Relation
    for (int i = 1; i <= n; i++)
    {
        if (temp[i] == -1)
            continue;
        char ch = temp[i] + 48;
        t.push_back(ch);
        temp[i] = -1;
        solve(n, k, ans, temp, t);
        t.pop_back();
        temp[i] = i;
    }
}
string getPermutation(int n, int k)
{
    vector<int> temp;
    for (int i = 1; i <= n; i++)
    {
        temp.push_back(i);
    }
    vector<string> ans;
    string t = "";
    solve(n, k, ans, temp, t);
    sort(ans.begin(), ans.end());
    return ans[k];
}

// Better Approach ----------------------
/*
- It is approach of a mathematical formula based on some observation
- Watch the video to understand thwe concept properly
- T.C - O(N) + O(N) + O(N)
- S.C - O(N) + O(N)
*/

string getPermutation(int n, int k)
{
    string ans = "";
    int fact = 1;
    for (int i = 1; i < n; i++)
    {
        fact *= i;
    }
    vector<int> temp;
    for (int i = 1; i <= n; i++)
    {
        temp.push_back(i);
    }

    k--;
    while (1)
    {
        int loc = k / fact;
        ans.push_back(temp[loc] + 48);
        temp.erase(temp.begin() + loc);
        if (temp.size() == 0)
            break;
        k = k % fact;
        fact = fact / temp.size();
    }
    return ans;
}

int main()
{

    return 0;
}