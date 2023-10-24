#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int m, int n, int arr[][m])
{
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
    int n, m;
    cin >> n >> m;
    int **arr = new int *[n];

    return 0;
}