#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minCost(string colors, vector<int> &neededTime)
{
    int prevMax = 0;
    int time = 0;
    int n = colors.size();
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && colors[i] != colors[i + 1])
        {
            prevMax = 0;
        }
        int curr = colors[i];
        time += min(prevMax, curr);
        prevMax = max(prevMax, curr);
    }
    return time;
}

int main()
{

    return 0;
}