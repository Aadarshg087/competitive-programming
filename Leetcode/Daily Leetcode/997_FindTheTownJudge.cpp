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

int findJudge(int n1, vector<vector<int>> &v)
{
    int n = v.size();
    vector<int> inDegree(n + 1, 0);
    vector<int> outDegree(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        inDegree[v[i][1]]++;
        outDegree[v[i][0]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (outDegree[i] == n - 1 && inDegree[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

int findJudge(int n1, vector<vector<int>> &v)
{
    int n = v.size();
    vector<int> count(n1 + 1, 0);
    for (int i = 0; i < n; i++)
    {
        count[v[i][0]]--;
        count[v[i][1]]++;
    }

    for (int i = 1; i < count.size(); i++)
    {
        if (count[i] == n1 - 1)
            return i;
    }
    return -1;
}

int main()
{

    return 0;
}