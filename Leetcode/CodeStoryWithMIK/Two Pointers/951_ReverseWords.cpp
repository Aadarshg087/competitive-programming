#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    int n = s.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

string reverseWords(string s)
{
    int n = s.size();
    bool first_word = false;
    string temp = "";
    bool one_space = true;
    // Cleaning the string
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ' ')
        {
            temp += s[i];
            first_word = true;
        }

        if (s[i] == ' ' && first_word && one_space)
        {
            cout << s[i + 1] << endl;
            temp += s[i];
            one_space = false;
        }
        else
        {
            if (s[i] != ' ')
                one_space = true;
        }
    }
    cout << temp << endl;

    if (temp[temp.size() - 1] == ' ')
        temp.pop_back();

    // return reverse(temp);
    vector<string> ans;
    string t = "";
    for (int i = 0; i < temp.size(); i++)
    {
        if (temp[i] == ' ')
        {
            ans.push_back(t);
            t = "";
        }
        else
            t += temp[i];
    }

    string a;
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        a += ans[i];
    }

    return a;
}

int main()
{
    string s = "the sky is blue";
    cout << reverseWords(s) << endl;

    return 0;
}