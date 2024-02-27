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
// Return repeat and missing number

// Better Approach - T.C - O(N) and S.C - O(N)
pair<int, int> repeatedNumber(vector<int> &arr)
{
    int n = arr.size();
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        v[arr[i]]++;
    }
    int repeating = -1;
    int missing = -1;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 2)
            repeating = i;
        else if (v[i] == 0)
            missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }

    return make_pair(repeating, missing);
}

// Optimal Approach - T.C - O(N) and S.C - O(1)
#define ll long long int
pair<int, int> repeatedNumber(vector<int> &arr, int n)
{
    ll sum1 = 0;
    ll sum2 = (n * 1LL * (n + 1)) / 2;
    ll sumSq1 = 0;
    ll sumSq2 = (n * (n + 1) * 1LL * (2 * n + 1)) / 6;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i];
        sumSq1 += ((long long)arr[i] * (long long)arr[i]);
    }

    ll diff1 = sum1 - sum2;

    ll diff2 = sumSq1 - sumSq2;
    ll val1 = diff2 / diff1;

    ll ans1 = (diff1 + val1) / 2;
    ll ans2 = ans1 - diff1;
    return make_pair((int)ans2, (int)ans1);
}

// Using bit manipulation
pair<int, int> repeatedNumber2(vector<int> *arr)
{
}

int main()
{

    return 0;
}