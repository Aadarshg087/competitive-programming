#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {2, 4, 1, 3, 5};
    // int arr[] = {10, 10, 10};
    int arr[] = {2, 3, 4, 5, 6};
    int n = 5;
    //  Brute force
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}