#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string findDifferentBinaryString(vector<string> &nums)
{
    int n = nums.size();
    unordered_set<string> st;
    for (int i = 0; i < nums.size(); i++)
    {
        st.insert(nums[i]);
    }
    string s = "";
    for (int i = 0; i < n; i++)
    {
        s += "1";
    }

    int i = 0;
    while (true)
    {
        if (st.find(s) == st.end())
            return s;
        else
        {
            s[i++] ^= 1;
        }
    }
    return s;
}

int main()
{

    return 0;
}