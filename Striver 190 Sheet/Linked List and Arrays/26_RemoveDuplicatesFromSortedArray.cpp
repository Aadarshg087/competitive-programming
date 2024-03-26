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

int removeDuplicates(vector<int> &v)
{
    int n = v.size();
    int prev = -1;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != prev)
        {
            v[j] = v[i];
            prev = v[i];
            j++;
        }
    }
    return j - 1;
}

int main()
{

    return 0;
}