#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int i, int j, int sum)
{
    // int sum = arr[i];
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int minElement = INT_MAX;
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         // Memo
    //         if (arr[i][j] != -1)
    //         {
    //             minElement = arr[i][j];
    //         }
    //     }
    // }

    // Base condition
    if (i == arr.size() - 1)
    {
        return sum += arr[i];
    }
    sum += arr[i];
    int ans = solve(arr, i + 1, j, sum);

}

int sumSubarrayMins(vector<int> &arr)
{
    return solve(arr, 0, 0, 0);
}

int sumSubarrayMins(vector<int> &arr)
{
    int sum = 0;
    int minElement = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        minElement = INT_MAX;
        for (int j = i; j < arr.size(); j++)
        {
            // if (abs(i - j) == 0)
            // {
            //     sum += i;
            // }
            minElement = min(minElement, arr[j]);
            sum += minElement;
        }
    }
}

int main()
{

    return 0;
}