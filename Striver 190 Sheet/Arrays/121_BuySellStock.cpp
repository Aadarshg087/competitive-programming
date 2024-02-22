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

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int mini = INT_MAX;
    int maxDiff = 0;
    for (int i = 0; i < n; i++)
    {
        if (prices[i] < mini)
        {
            mini = prices[i];
        }
        else
        {
            maxDiff = max(maxDiff, prices[i] - mini);
        }
    }
    return maxDiff;
}

int main()
{

    return 0;
}