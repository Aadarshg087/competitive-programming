#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> kSmallestElements(int arr[], int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        if (arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    vector<int> p;
    for (int i = 0; i < k; i++)
    {
        int element = pq.top();
        pq.pop();
        p.push_back(element);
    }

    return p;
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    vector<int> p = kSmallestElements(arr, n, k);

    return 0;
}