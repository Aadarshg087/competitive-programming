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

int lengthOfSubstring(string s)
{
    set<char> st;
    int n = s.size();
    if (n == 0)
        return 0;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (st.find(s[i]) == st.end())
        {
            st.insert(s[i]);
        }
        else
        {
            int t = st.size();
            ans = max(ans, t);
            st.clear();
            st.insert(s[i]);
        }
    }
    int t = st.size();
    return max(t, ans);
}

int main()
{

    return 0;
}