#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<string> keypadProblem(vector<string> &s, string n, int index, vector<string> &ans, string newStr)
{
    // cout << "fsddf is called" << endl;
    // cout << newStr << endl;
    // Base case
    if (index >= n.size())
    {
        // cout << newStr << endl;
        ans.push_back(newStr);
        return ans;
    }

    // Recursive call
    int nums = n[index] - '0';
    for (int i = 0; i < s[nums].size(); i++)
    {
        newStr += s[nums][i];
        keypadProblem(s, n, index + 1, ans, newStr);
        newStr.pop_back();
    }
    return ans;
}

int main()
{
    vector<string> s = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    vector<string> ans;
    string num = "234";
    int i = 0;
    string contact = "BEGGER";
    keypadProblem(s, num, i, ans, "");
    for (int i = 0; i < ans.size(); i++)
    {
        if (contact.find(ans[i]) != string::npos)
        {
            cout << "YES: " << ans[i] << " " << contact << endl;
        }
        else
            cout << ans[i] << endl;
    }

    return 0;
}