#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool halvesAreAlike(string s)
{
    set<char> st;
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
    st.insert('A');
    st.insert('E');
    st.insert('I');
    st.insert('O');
    st.insert('U');

    int n = s.size();
    string s1 = s.substr(0, n / 2);
    string s2 = s.substr(n / 2);
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (st.find(s1[i]) != st.end())
        {
            count1++;
        }
        if (st.find(s2[i]) != st.end())
        {
            count2++;
        }
    }

    return count1 == count2;
}

int main()
{

    return 0;
}