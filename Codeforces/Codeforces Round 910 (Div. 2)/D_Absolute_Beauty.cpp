#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

// void exchangePos(int *arr2, int n, int maxElement2pos, int minElement2pos)
// {
//     int temp = arr2[maxElement2pos];
//     arr2[maxElement2pos] = arr2[minElement2pos];
//     arr2[minElement2pos] = temp;
// }

ll beautyArray(int *arr1, int *arr2, int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp += abs(arr1[i] - arr2[i]);
    }
    return temp;
}

// void solve()
// {
//     int n;
//     cin >> n;
//     int *arr1 = new int[n];
//     int *arr2 = new int[n];
//     int maxElement1 = INT_MIN;
//     int minElement1 = INT_MAX;
//     int maxElement1pos = INT_MIN;
//     int minElement1pos = INT_MAX;
//     int maxElement2 = INT_MIN;
//     int minElement2 = INT_MAX;
//     int maxElement2pos = INT_MIN;
//     int minElement2pos = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//         if (arr1[i] > maxElement1)
//         {
//             maxElement1 = arr1[i];
//             maxElement1pos = i;
//         }
//         if (arr1[i] < minElement1)
//         {
//             minElement1 = arr1[i];
//             minElement1pos = i;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr2[i];
//         if (arr2[i] > maxElement2)
//         {
//             maxElement2 = arr2[i];
//             maxElement2pos = i;
//         }
//         if (arr2[i] < minElement2)
//         {
//             minElement2 = arr2[i];
//             minElement2pos = i;
//         }
//     }

//     exchangePos(arr2, n, maxElement2pos, minElement2pos);
//     ll ans = beautyArray(arr1, arr2, n);
//     cout << ans << endl;
// }

// ----------- Wrong Approach -----------
// void solve1()
// {
//     int n;
//     cin >> n;
//     int *arr1 = new int[n];
//     int *arr2 = new int[n];

//     for (int i = 0; i < n; i++)
//         cin >> arr1[i];

//     for (int i = 0; i < n; i++)
//         cin >> arr2[i];

//     priority_queue<int> pq1(arr1, arr1 + n);
//     priority_queue<int, vector<int>, greater<int>> pq2(arr1, arr1 + n);

//     int beauty = 0;
//     while (!pq1.empty())
//     {
//         beauty += abs(pq1.top() - pq2.top());
//         pq1.pop();
//         pq2.pop();
//     }

//     cout << beauty << endl;
// }

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve2()
{
    int n;
    cin >> n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    ll maxAns = beautyArray(arr1, arr2, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll temp = arr2[i];
            arr2[i] = arr2[j];
            arr2[j] = temp;
            // print(arr2, n);

            ll ans = beautyArray(arr1, arr2, n);
            if (ans > maxAns)
                maxAns = ans;

            temp = arr2[i];
            arr2[i] = arr2[j];
            arr2[j] = temp;
            // print(arr2, n);
            // cout << endl;
        }
    }

    cout << maxAns << endl;
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
        solve2();
    }
    return 0;
}