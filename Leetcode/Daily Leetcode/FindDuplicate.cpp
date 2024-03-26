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
int findDuplicate(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = j + 1; j < n; j++)
        {
            if (v[i] == v[j])
                return v[i];
        }
    }
    return -1;
}
int findDuplicate(vector<int> &v)
{
    int n = v.size();
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        if (st.find(v[i]) != st.end())
        {
            return v[i];
        }
        st.insert(v[i]);
    }
    return -1;
}

int findDuplicater(vector<int> &v)
{
    int n = v.size();
    int slow = v[0];
    int fast = v[v[slow]];
    while (fast != slow)
    {
        slow = v[slow];
        fast = v[v[fast]];
    }

    
}

int main()
{

    return 0;
}