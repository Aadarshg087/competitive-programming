#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"
// 1 2, x = 3
bool helper(int *arr, int n, int x, int sum, int idx)
{
    if (idx == n)
    {
        return sum == x;
    }

    bool ans1 = helper(arr, n, x, sum + arr[idx], idx + 1);
    bool ans2 = helper(arr, n, x, sum - arr[idx], idx + 1);
    return ans1 || ans2;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int idx = 1;
    int sum = arr[0];
    if (helper(arr, n, x, sum, idx))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    // delete[] arr;
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