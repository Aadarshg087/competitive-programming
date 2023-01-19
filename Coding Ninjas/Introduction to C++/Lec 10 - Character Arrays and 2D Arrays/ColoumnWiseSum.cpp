#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < c; i++)
    {
        int sum = 0;
        for (int j = 0; j < r; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }

    return 0;
}