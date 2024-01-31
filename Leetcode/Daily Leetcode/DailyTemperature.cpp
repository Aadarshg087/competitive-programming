#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int> &arr)
{
    stack<int> s;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[i] <= arr[s.top()])
        {
            s.pop();
        }
        
    }
}

vector<int> dailyTemperatures(vector<int> &arr)
{
    stack<int> s;
    int n = arr.size();
    vector<int> ans(n, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && arr[i] >= arr[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i] = 0;
        }
        else
        {
            ans[i] = s.top() - i;
        }
        s.push(i);
    }
    return ans;
}

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    map<int, int> mp;
    int n = temperatures.size();
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        mp.insert({temperatures[i], i});
    }

    for (int i = 0; i < n; i++)
    {
        auto it = mp.upper_bound(temperatures[i]);
        if (it != mp.end() && it->second > i)
        {
            v[i] = it->second - i;
        }
    }

    return v;
}

int main()
{

    return 0;
}