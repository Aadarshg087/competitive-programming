#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minCount2(int n)
{
    if (n == 1 || n == 2 || n == 3)
    {
        
    }
    else if (n == 0)
    {

    }
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