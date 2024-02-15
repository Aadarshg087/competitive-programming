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
string removeDuplicateLetters(string &s)
{
    unordered_set<char> st;
    cout << s << endl;
    vector<int> alpha(26, 0);
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int loc = s[i] - 'a';
        alpha[loc] = i;
        st.insert(s[i]);
    }
    for (int i : alpha)
        cout << i << endl;

    int size = st.size();
    string temp = "";
    for (int i = 0; i < n; i++)
    {
        if (temp.empty())
            temp += s[i];
        else
        {
            if (s[i] == temp.back())
            {
                temp += s[i];
                continue;
            }
            int loc = temp.back() - 'a';
            if (alpha[loc] > i)
            {
                cout << temp.back() << " " << alpha[loc] << " " << i << endl;
            }
            while (!temp.empty() && temp.back() > s[i] && alpha[loc] > i)
            {
                // cout << temp.back() << " ";
                temp.pop_back();
            }
            temp.push_back(s[i]);
        }
    }

    return temp;
}

int main()
{
    string s = "cbacdcbc";
    cout << removeDuplicateLetters(s) << endl;

    return 0;
}