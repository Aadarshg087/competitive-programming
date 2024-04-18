#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/
// Basic Approach ----------------------

int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    vector<int> v;
    for (int i : arr1)
    {
        v.push_back(i);
    }

    for (int i : arr2)
    {
        v.push_back(i);
    }
    sort(v.begin(), v.end());

    return v[k - 1];
}

// Better Approach ---------------------------

int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    vector<int> v;
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            v.push_back(arr1[i++]);
        }
        else
        {
            v.push_back(arr2[j++]);
        }
    }

    while (i < n)
        v.push_back(arr1[i++]);

    while (j < m)
        v.push_back(arr2[j++]);

    return v[k - 1];
}


// Optimal Approach --------------------------


int main()
{

    return 0;
}