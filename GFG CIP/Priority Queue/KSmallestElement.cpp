#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

int kthSmallest(int arr[], int n, int k)
{
    // Your code here
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);
    int i = 1;
    while (i != k)
    {
        pq.pop();
        i++;
    }
    return pq.top();

    // OR
    // sort(arr, arr + n);
    // return arr[k - 1];
}

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    int t;
    return 0;
}