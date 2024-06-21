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

//  BRUTE FORCE
/*
- We are finding the best area in all the subarray possible in the heights
- This will allow us to pick every single case that is possible
T.C - O(n * n)
S.C - O(1)
*/

int largestRectangleArea(vector<int> &v)
{
    int n = v.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int area = 0;
        int minEle = INT_MAX;
        for (int j = i; j < n; j++)
        {
            minEle = min(minEle, v[j]);
            area = minEle * (j - i + 1);
            ans = max(area, ans);
        }
    }
    return ans;
}

// OPTIMAL APPROACH
/*
- We are creating two vector using the concept of next Smaller element and previous smaller element
- From this we can calculate the max area of the v[i] and can be used to measure and compare ofeach building
- Kind of a prefix concept and similar to brute force. We are calculating the area of every v[i] but in a bit optimized to way. Make sure to check the breadth calculation and revise it
T.C - O(n) + O(n) + O(n);
S.C - O(n) + O(n)
*/

vector<int> nextSmallerElement(vector<int> &v)
{
    stack<pair<int, int>> st;
    int n = v.size();
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top().first >= v[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            st.push({v[i], i});
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top().second;
            st.push({v[i], i});
        }
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> &v)
{
    stack<pair<int, int>> st;
    int n = v.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top().first >= v[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            st.push({v[i], i});
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top().second;
            st.push({v[i], i});
        }
    }
    return ans;
}
int largestRectangleArea(vector<int> &v)
{
    int n = v.size();

    vector<int> next = nextSmallerElement(v);
    vector<int> prev = prevSmallerElement(v);

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int l = v[i];
        int c = (next[i] == -1) ? n - i : abs(next[i] - i);
        int d = (prev[i] == -1) ? i : abs(prev[i] - i) - 1;
        int b = c + d;
        res = max(res, l * b);
    }
    return res;
}

int main()
{

    return 0;
}