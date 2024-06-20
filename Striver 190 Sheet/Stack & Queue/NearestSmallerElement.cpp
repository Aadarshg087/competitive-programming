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

// BRUTE FORCE APPROACH
/*
- We are simply find the next first smaller element to the left of the each element
T.C -  O(n * m) where m is traversing in the array to find first smaller elements at every iteration
S.C - O(1)

*/

int findSmaller(vector<int> &A, int i, int ele)
{
    while (i >= 0)
    {
        if (A[i] < ele)
            return A[i];
        i--;
    }
    return -1;
}

vector<int> prevSmaller(vector<int> &A)
{
    int n = A.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int ele = findSmaller(A, i - 1, A[i]);
        ans[i] = ele;
    }
    return ans;
}

// BETTER APPROACH
/*

*/
vector<int> prevSmaller(vector<int> &A)
{
    int n = A.size();
    stack<int> st;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push(A[i]);
            ans[i] = -1;
        }
        else if (st.top() >= A[i])
        {
            while (!st.empty() && st.top() >= A[i])
            {
                st.pop();
            }
            if (st.empty())
            {
                ans[i] = -1;
                st.push(A[i]);
            }
            else
            {
                ans[i] = st.top();
                st.push(A[i]);
            }
        }
        else
        {
            ans[i] = st.top();
            st.push(A[i]);
        }
    }

    return ans;
}

int main()
{

    return 0;
}