#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n = 10;
    int arr[10] = {12, 2, 6, 34, 87, 1, 3, 5, 4, 10};
    priority_queue<int, vector<int>, greater<int>> p(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = p.top();
        p.pop();
    }

    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    priority_queue<int> pq(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = pq.top();
        pq.pop();
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}