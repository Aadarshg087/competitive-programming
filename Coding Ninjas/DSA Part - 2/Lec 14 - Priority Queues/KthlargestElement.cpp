#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kthLargest(int *arr, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        if (arr[i] > pq.top())
        {
            pq.push(arr[i]);
            pq.pop();
        }
    }

    return pq.top();
}

int main()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << kthLargest(arr, n, k);

    return 0;
}