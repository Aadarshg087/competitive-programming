#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    stack<int> s;
    s.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int ans = (s.empty()) ? (-1) : (s.top());
        cout << ans << endl;
        s.push(arr[i]);
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}