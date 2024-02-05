#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> beautifulIndices(string s, string a, string b, int k)
{
    
}

vector<int> beautifulIndices(string s, string a, string b, int k)
{
    int n = s.size();
    string temp1 = s;
    string temp2 = s;
    vector<int> v1;
    vector<int> v2;
    while (true)
    {
        cout << "YES" << endl;
        if (temp1.find(a) != string::npos)
        {
            int i = temp1.find(a);
            cout << i << endl;
            v1.push_back(i + (s.size() - temp1.size()));
            temp1 = temp1.substr(i + a.size());
        }
        if (temp2.find(b) != string::npos)
        {
            int j = temp2.find(b);
            cout << j << endl;
            v2.push_back(j);
            temp2 = temp2.substr(j + b.size());
        }
        else
        {
            break;
        }
    }
    vector<int> ans;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            cout << abs(v2[j] - v1[i]) << endl;
            if (abs(v2[j] - v1[i]) <= k)
            {
                ans.push_back(i);
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s = "isawsquirrelnearmysquirrelhouseohmy";
    string a = "my";
    string b = "squirrel";
    int k = 15;
    vector<int> ans = beautifulIndices(s, a, b, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}