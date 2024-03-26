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

int findMaxConsecutiveOnes(vector<int> &v)
{
    int n = v.size();
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            count++;
            ans = max(ans, count);
        }
        else
        {
            count = 0;
        }
    }
    return ans;
}

int main()
{

    return 0;
}