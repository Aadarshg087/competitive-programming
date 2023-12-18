#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

int maxSum(vector<pair<int, int>> p, int N, int W, int i)
{
    if (W < 0)
        return INT_MIN;
    if (N == 0)
        return 0;
    int temp1 = maxSum(p, N - 1, W, i + 1);
    int temp2 = maxSum(p, N - 1, W - p[i].first, i + 1) + p[i].second;
    int res = max(temp1, temp2);
    return res;
}

void solve()
{
    int N, W;
    cin >> N >> W;
    int n = 2 * N;
    int k = (2 * N) + 1;
    vector<pair<int, int>> p(N + 1, {0, 0});
    vector<int> v(k);
    for (int i = 1; i < k; i++)
    {
        cin >> v[i];
    }
    int j = 1;
    for (int i = 1; i < k; i += 2)
    {
        p[j].first = v[i];
        p[j].second = v[i + 1];
        j++;
    }

    // for (auto i : v)
    //     cout << i << " ";

    cout << maxSum(p, N, W, 1) << endl;
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