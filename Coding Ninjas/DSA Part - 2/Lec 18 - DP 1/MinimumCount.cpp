#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minCount2_helper(int n, int *arr)
{
    if (arr[n] != -1)
    {
        return arr[n];
    }
    

    int ans = 1 + minCount2_helper(n - num, arr);
}

int minCount2(int n)
{
    int *arr = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = -1;
    }
    int arr[0] = 0;
    int arr[1] = 1;
    int arr[2] = 2;
    int arr[3] = 3;

    return minCount2(int n, arr);
}

int minCount(int n)
{
    // Base Case
    if (n == 1 || n == 2 || n == 3)
    {
        return n;
    }
    else if (n == 0)
    {
        return 0;
    }

    // Small Calculations
    int temp = 1;
    int num;
    int min = INT_MAX;
    int ans;
    while ((temp * temp) <= n)
    {
        num = temp;
        num *= num;
        ans = 1 + minCount(n - num);
        if (ans < min)
        {
            min = ans;
        }
        temp++;
    }

    // Recursive Call
    return min;

    // int ans = 1 + minCount(n);
    // minCount_helper(temp, n);
}

int main()
{
    cout << minCount(115) << endl;

    return 0;
}