#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minimum_vertical_sum(vector<vector<int>> v)
{
    // Your code here
    int totalVector = v.size();
    int j = 0;
    int i = 0;
    int ans = 0;
    while (i < v.size())
    {
        if (j <= v[i].size() - 1)
            ans += v[i][j];
        if (i == v.size() - 1)
        {
            i = 0;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{

    return 0;
}