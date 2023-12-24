#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> arr(n + 1, 0);
    vector<int> v(k + 1, 0);
    int countSame = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        // if (ar[i] == i)
        // {
        //     countSame++;
        // }
    }
    for (int i = 1; i <= k; i++)
    {
        cin >> v[i];
    }
    int score = 0;
    // if (countSame > 0)
    // {
    //     score += countSame;
    //     fill(arr.begin(), arr.end(), 0);
    // }
    countSame = 0;
    for (int i = 1; i <= k; i++)
    {
        // if (arr[i] != i)
        // {
        for (int j = 1; j <= v[i]; j++)
        {
            if (arr[j] == j)
            {
                for (int k = 1; k <= n; k++)
                {
                    if (arr[k] == k)
                    {
                        countSame++;
                    }
                }
                if (countSame > 0)
                {
                    score += countSame;
                    fill(arr.begin(), arr.end(), 0);
                    countSame = 0;
                }
            }
            else
            {
                int j = 0;
                for (int k = 1; k <= v[i]; k++)
                {
                    arr[j++]++;
                }
            }
        }
    }
    cout << score << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}