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

int findJudge(int n1, vector<vector<int>> &v)
{
    sort(v.begin(), v.end());
    int n = v.size();
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(v[i][1]);
    }

    for (int i = 0; i < n; i++)
    {
        auto it = st.find(v[i][0]);
        if (it != st.end())
            st.erase(it);
    }
    int ans;
    if (st.empty())
        return -1;
    
    
}

int main()
{

    return 0;
}