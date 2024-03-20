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

vector<vector<int>> insert(vector<vector<int>> &v, vector<int> &ni)
{
    int n = v.size();
    vector<vector<int>> ans;
    if (n == 0)
    {
        ans.push_back(ni);
        return ans;
    }
    sort(v.begin(), v.end());
    int first = ni[0];
    int second = ni[1];
    vector<int> temp;
    // if it is in the beginnning
    if (first < v[0][0] && second < v[0][0])
    {
        temp = {first, second};
        ans.push_back(temp);
        ans.insert(ans.end(), v.begin(), v.end());
        return ans;
    }

    // if interval is in the ending
    if (first > v[n - 1][1])
    {
        temp = {first, second};
        v.push_back(temp);
        return v;
    }

    int loc = 0;
    bool c = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i][1] >= first)
        {
            if (temp.size() == 0)
                temp.push_back(min(v[i][0], first));
            if (first < v[i][0] && second < v[i][0])
            {
                temp = {first, second};
                c = 1;
                break;
            }
            if (i + 1 != n && second > v[i][1] && second < v[i + 1][0])
            {
                temp.push_back(second);
                ans.push_back(temp);
                break;
            }
            if (second <= v[i][1])
            {
                temp.push_back(v[i][1]);
                ans.push_back(temp);
                break;
            }
            else if (i == n - 1)
            {
                temp.push_back(max(second, v[i][1]));
                ans.push_back(temp);
                break;
            }
        }
        else
        {
            ans.push_back(v[i]);
        }
    }

    if (c == 1)
    {
        v.push_back(temp);
        sort(v.begin(), v.end());
        return v;
    }

    i++;
    for (int k = i; k < n; k++)
        ans.push_back(v[k]);

    return ans;
}

int main()
{

    return 0;
}