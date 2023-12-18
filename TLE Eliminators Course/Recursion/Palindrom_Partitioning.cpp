#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

bool checkPalindroms(string &s)
{
    if (s.size() == 1)
        return true;
    string newString = s;
    reverse(newString.begin(), newString.end());
    return s == newString;
}

vector<vector<string>> helper(string s, int i)
{
    if (i == s.size() - 1)
    {
        vector<string> temp;
        temp.push_back(to_string(s[0]));
        vector<vector<string>> ans;
        ans.push_back(temp);
        return ans;
    }
    vector<string> temp;
    for (int j = 1; j <= s.size() - i; j++)
    {
        string tempstr = s.substr(i, j);
        if (checkPalindroms(tempstr))
        {
            temp.push_back(tempstr);
        }
    }

    vector<vector<string>> ans = helper(s.substr(1), i + 1);
    ans.push_back(temp);
    return ans;
}

vector<vector<string>> partition(string &s)
{
    return helper(s, 0);
}

void solve()
{
    cout << "ges" << endl;
    string s;
    cin >> s;
    vector<vector<string>> ans = partition(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " [ ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "] , ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}