#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 10)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}