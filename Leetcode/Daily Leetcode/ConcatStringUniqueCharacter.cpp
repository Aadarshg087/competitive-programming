#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(vector<string> &arr, int index, unordered_set<char> &st)
{
    // Base case
    if (index == arr.size())
    {
        return 0;
    }

    // Keeping the original set
    unordered_set<char> tempst = st;
    string s = arr[index];
    bool isValid = true;

    // checking whether the strings are true or not
    for (int i = 0; i < arr[index].size(); i++)
    {
        if (st.find(s[i]) != st.end())
        {
            isValid = false;
        }
        else
        {
            st.insert(s[i]);
        }
    }
    int ans1 = 0;
    // adding the size of the current string if they are valid
    if (isValid)
        ans1 = arr[index].size() + solve(arr, index + 1, st);

    // Otherwise simply calling forward with same set of elements
    int ans2 = solve(arr, index + 1, tempst);

    // returning the max of two
    return max(ans1, ans2);
}
int maxLength(vector<string> &arr)
{
    unordered_set<char> st;
    int index = 0;
    return solve(arr, index, st);
}

int main()
{

    return 0;
}