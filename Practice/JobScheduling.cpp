#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

vector<int> JobScheduling(Job arr[], int n)
{
    // your code here
    priority_queue<int, vector<int>, greater<int>> pq;
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<pair<int, int>> v;
    for (int i = 0; i < size; i++)
    {
        v.push_back(make_pair(arr[i].dead, arr[i].profit));
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        int currDead = v[i].first;
        if (pq.empty())
            pq.push(v[i].second);
        else if (pq.size() < currDead)
        {
            pq.push(v[i].second);
        }
        else if (pq.size() == currDead && v[i].second > pq.top())
        {
            pq.pop();
            pq.push(v[i].second);
        }
    }

    vector<int> ans;
    ans.push_back(pq.size());
    int sum = 0;
    while (pq.empty() == false)
    {
        sum += pq.top();
        pq.pop();
    }
    ans.push_back(sum);
    return ans;
}

// int t[5001];
// int getnextJob(vector<vector<int>> &arr, int l, int endTime)
// {
//     int n = arr.size();
//     int r = n - 1;
//     int result = n + 1;
//     while (l <= r)
//     {
//         int mid = l + (r - l) / 2;
//         if (arr[mid][0] >= endTime)
//         {
//             result = mid;
//             r = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
//     return result;
// }

// int solve(vector<vector<int>> &arr, int i)
// {
//     if (i >= arr.size())
//     {
//         return 0;
//     }
//     if (t[i] != -1)
//     {
//         return t[i];
//     }
//     int next = getnextJob(arr, i + 1, arr[i][1]);
//     int Taken = arr[i][2] + solve(arr, next);
//     int notTaken = solve(arr, i + 1);

//     return t[i] = max(Taken, notTaken);
// }
// int jobScheduling(vector<int> &startTime, vector<int> &endTime,
//                   vector<int> &profit)
// {
//     int n = endTime.size();
//     vector<vector<int>> arr(n, vector<int>(3, 0));
//     for (int i = 0; i < n; i++)
//     {
//         arr[i][0] = startTime[i];
//         arr[i][1] = endTime[i];
//         arr[i][2] = profit[i];
//     }
//     memset(t, -1, sizeof(t));

//     sort(arr.begin(), arr.end());
//     return solve(arr, 0);
// }

int main()
{

    return 0;
}