#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    int *pf = new int[n];
    pf[0] = 0;
    cout << pf[0] << " " << arr[0] << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pf[i] = pf[i - 1] + arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << pf[i] << " ";
    }
    cout << endl;

    return 0;
}