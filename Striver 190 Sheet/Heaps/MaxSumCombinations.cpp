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

// Basic Appraoch ----------------------------
vector<int> MaxSumCombinations(vector<int> &A, vector<int> &B, int C)
{
    vector<int> v(C);
    int k = 0;
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; i < B.size(); j++)
        {
            v.push_back(A[i] + B[j]);
        }
    }

    sort(v.begin(), v.end(), greater<int>());
    vector<int> b;
    for (int i = 0; i < C; i++)
        b.push_back(v[i]);
    return b;
}

vector<int> MaxSumCombinations(vector<int> &A, vector<int> &B, int C)
{
    vector<int> ans;
    priority_queue<int> pq;
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < B.size(); j++)
        {
            pq.push(A[i] + A[j]);
            if (pq.size() > C)
                pq.pop();
        }
    }
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}

int main()
{

    return 0;
}