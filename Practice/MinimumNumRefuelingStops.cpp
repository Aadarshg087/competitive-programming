#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minRefeulStops(int target, int startfeul, vector<vector<int>> &stations)
{
    sort(stations.begin(), stations.end());
    priority_queue<int> pq;
    for (int i = 0; i < stations.size(); i++)
    {
        pq.push(stations[i][1]);
    }


    int n = stations.size();
    target = stations[n - 1][0] - target;
    for (auto &i : stations)
    {
        if (i[0] < 0)
        {
            while (!pq.empty())
            {
            }
        }
    }
    priority_queue<int> feulSort;

    int ans = 0;
    while (pq.empty())
    {
        int t = pq.top();
        pq.pop();
        ans++;
    }

    

    int i = 0;
    while (i < stations[0][0])
    {
        stations[0][1] = 9;
        int p = pq.top();
        pq.pop();
        ans++;
    }

    if (pq.empty())
        return -1;

    return ans;
}

int main()
{
    priority_queue<int> pq;

    return 0;
}