#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int m;

int minCostPath(int arr[][n], int m)
{
    // printing the function
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << minCostPath(arr, m) << endl;

    return 0;
}