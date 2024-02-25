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

// Brute Force - O(nlogn)   S.C - O(1)
int findDuplicate(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] == arr[i])
            return arr[i];
    }
    return arr[0];
}

// Better -  T.C - O(n)   S.C - O(n)
int findDuplicate(vector<int> &arr)
{
    unordered_map<int, int> mp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        if (mp[arr[i]] == 2)
            return arr[i];
    }
    return 0;
}

// Optimal
int findDuplicate(vector<int> &v)
{
    
}

int main()
{

    return 0;
}