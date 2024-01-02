#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxWidthOfVerticalArea(vector<vector<int>> &points)
{
    sort(points.begin(), points.end());
    int maxDiff = INT_MIN;
    for (int i = 0; i < points.size() - 1; i++)
    {
        maxDiff = max(maxDiff, points[i + 1][0] - points[i][0]);
    }

    return maxDiff;
}

int main()
{

    return 0;
}