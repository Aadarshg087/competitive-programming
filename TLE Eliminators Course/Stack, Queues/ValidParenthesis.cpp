#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    string s1 = "({[";
    string s2 = ")]}";
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() && s2.find(s[i]) != string::npos)
            return false;
        if (s1.find(s[i]) != string::npos || (st.top() == '(' && s[i] == ')'))
        {
            if (s[i] == ')')
                st.pop();
            else
                st.push(s[i]);
        }
        if (s1.find(s[i]) != string::npos || (st.top() == '{' && s[i] == '}') || s1.find(s[i]) != string::npos)
        {
            if (s[i] == '}')
                st.pop();
            else
                st.push(s[i]);
        }
        if (s1.find(s[i]) != string::npos || (st.top() == '[' && s[i] == ']'))
        {
            if (s[i] == ']')
                st.pop();
            else
                st.push(s[i]);
        }
    }

    if (st.empty())
        return true;
    else
        return false;
}

int main()
{

    return 0;
}