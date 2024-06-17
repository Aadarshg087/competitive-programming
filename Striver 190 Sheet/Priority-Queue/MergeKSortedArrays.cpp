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
BRUTE FORCE
- Simply add the all elements in the pririty queue (min heap) or vector and extrtact the elements into vector or sort the elements into vector if stored in vector initially
- return the vector
T.C - O(nlogn) + O(nlogn)
S.C - O(n) + O(n)
*/

vector<int> mergeKSortedArrays(vector<vector<int>> &v, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n = v.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            // pq.push(v[i][j]);
            ans.push_back(v[i][j]);
        }
    }
    sort(ans.begin(), ans.end());

    // while (!pq.empty())
    // {
    //     ans.push_back(pq.top());
    //     pq.pop();
    // }
    return ans;
}

class data
{
public:
    int val;
    int apos;
    int vpos;
    data(int val, int apos, int vpos)
    {
        this->val = val;
        this->apos = apos;
        this->vpos = vpos;
    }
};

struct comparator
{
    bool operator()(data d1, data d2)
    {
        return d1.val > d2.val; // min heap
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>> &v, int k)
{
    priority_queue<data, vector<data>, comparator> pq; // min heap

    for (int i = 0; i < k; i++)
    {
        if (!v[i].empty())
        {
            data d(v[i][0], i, 0);
            pq.push(d);
        }
    }

    vector<int> ans;
    while (!pq.empty())
    {
        data temp = pq.top();
        pq.pop();
        int val = temp.val;
        ans.push_back(val);
        int vpos = temp.vpos;
        int apos = temp.apos;
        // cout<<val<<" "<<apos<<" "<<vpos<<endl;
        if (vpos + 1 < v[apos].size())
        {
            data d(v[apos][vpos + 1], apos, vpos + 1);
            pq.push(d);
        }
    }

    return ans;
}

int main()
{

    return 0;
}