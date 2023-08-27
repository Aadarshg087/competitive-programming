#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> kLargestElements(int input[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(input[i]);
    }

    for (int i = k; i < n; i++)
    {
        if (input[i] > pq.top())
        {
            pq.pop();
            pq.push(input[i]);
        }
    }

    vector<int> p;
    while (!pq.empty())
    {
        p.push_back(pq.top());
        pq.pop();
    }

    return p;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    vector<int> p = kLargestElements(arr, n, k);

    return 0;
}