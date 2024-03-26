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

void solve(vector<int> &arr, int N, int i, int sum, vector<int> &v)
{
    if (i == N)
    {
        v.push_back(sum);
        return;
    }

    solve(arr, N, i + 1, sum, v);
    sum += arr[i];
    solve(arr, N, i + 1, sum, v);
}

vector<int> subsetSums(vector<int> arr, int N)
{
    // Write Your Code here
    vector<int> v;
    solve(arr, N, 0, 0, v);
}

int main()
{

    return 0;
}