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
// Return repeat and missing number

// Brute force
vector<int> repeatedNumber(const vector<int> &A)
{
    sort(A.begin(), A.end());
    int n = A.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (A[i - 1] == A[i])
        {
            ans.push_back(A[i]);
            ans.push_back(i + 1);
        }
    }
    return ans;
}

int main()
{

    return 0;
}