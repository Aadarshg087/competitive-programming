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

/*
// Optimal Solution
- First of all, good and tricky problem
- Sort the both the array and Sum of last 2 index will be the highest so we will push that part intiailly
- Tricky part is, we can't really predict or essentially tell the next just smaller sum  will be which {i - 1, j} OR {i, j - 1} where i and j are n - 1 initially
- So, we push the sum with their respective indexes and in priority qeues as well as in set(only indices)
- we will take the references of indeces from the pq and verfiy it from the set(to make sure we are not picking the same indices) and add the sum {i - 1, j} as well as {i, j- 1}. pq will sort it automatically
- At every iteration of the while loop, we add the sum into ans vector from pq and find the next smaller sum from the respective indices

T.C - O(nlogn) + O(nlogn) + C(Clogn)
S.C - O(n)

*/

vector<int> solve(vector<int> &A, vector<int> &B, int C)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    priority_queue<pair<int, pair<int, int>>> pq;
    set<pair<int, int>> st;
    int n = A.size();
    pq.push({A[n - 1] + B[n - 1], {n - 1, n - 1}});
    st.insert({n - 1, n - 1});
    vector<int> ans;
    while (C--)
    {
        auto it = pq.top();
        pq.pop();
        int sum = it.first;
        int ind1 = it.second.first;
        int ind2 = it.second.second;
        ans.push_back(sum);
        if (st.find({ind1 - 1, ind2}) == st.end())
        {
            int s = A[ind1 - 1] + B[ind2];
            pq.push({s, {ind1 - 1, ind2}});
            st.insert({ind1 - 1, ind2});
        }
        if (st.find({ind1, ind2 - 1}) == st.end())
        {
            int s = A[ind1] + B[ind2 - 1];
            pq.push({s, {ind1, ind2 - 1}});
            st.insert({ind1, ind2 - 1});
        }
    }
    return ans;
}

int main()
{

    return 0;
}