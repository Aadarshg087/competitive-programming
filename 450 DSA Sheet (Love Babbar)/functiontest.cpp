#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int arr[])
{
    cout << "Size of array in function: " << sizeof(arr) << endl;
    return 0;
}

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Size of array in the main: " << sizeof(arr) << endl;
    sum(arr);
    return 0;
}