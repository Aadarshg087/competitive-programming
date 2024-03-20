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

int findMinArrowShots(vector<vector<int>> &v)
{
    sort(v.begin(), v.end());
    vector<vector<int>> ans;
    vector<int> temp;
    int n = v.size();
    temp = v[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        int first = temp[0];
        int second = temp[1];
        if (v[i][0] <= second)
        {
            int f = v[i][0];
            int s = second;
            if (v[i][1] <= second)
                s = v[i][1];
            temp = {f, s};
        }
        else
        {
            count++;
            temp = v[i];
        }
    }

    return count;
}

int main()
{
    vector<int> temp;
    temp = {1, 23};
    for (int i : temp)
        cout << i << endl;

    return 0;
}