#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << sizeof(int) << endl;
    long long *ptr = NULL;
    cout << sizeof(ptr) << endl;

    return 0;
}