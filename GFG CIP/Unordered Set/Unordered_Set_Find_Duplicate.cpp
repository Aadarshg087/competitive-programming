#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void DuplicateMe(int arr[], int n)
{
    // Your code here
    // Use 2 sets
    unordered_set<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.count(arr[i]))
            cout << arr[i] << " ";
        else
            s.insert(arr[i]);
    }
}

int main()
{

    return 0;
}