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

string lastNonEmptyString(string s)
{
    string temp = "";
    unordered_set<char> st;
    int i = 0;
    while (!s.empty())
    {
        int n = s.size();
        if (st.find(s[i]) != st.end())
        {
            temp += s[i];
        }
        else
            st.insert(s[i]);
        i++;
        if (i == n)
        {
            cout << "YES"
                 << " " << temp << endl;
            if (temp == "")
                return s;
            s = temp;
            temp.clear();
            i = 0;
            st.clear();
        }
    }
    return s;
}

int main()
{
    string s = "ababababababa";
    cout << lastNonEmptyString(s) << endl;

    return 0;
}