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

int bagOfTokensScore(vector<int> &v, int power)
{
    if (v.size() == 0)
        return 0;
    sort(v.begin(), v.end());
    if (v[0] > power)
        return 0;

    int n = v.size();
    int i = 0;
    int j = n - 1;
    int score = 0;
    int ans = 0;
    while (i < j)
    {
        if (v[i] <= power)
        {
            power -= v[i];
            score++;
            i++;
            ans = max(ans, score);
        }
        else
        {
            power += v[j];
            score--;
            j--;
        }
    }
    return ans;
}

int main()
{

    return 0;
}