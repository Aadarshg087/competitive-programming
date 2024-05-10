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

int solve(int num, int n, int m)
{
    --n;
    long long int temp = num;
    while (n--)
    {
        num = 1LL * num * temp;
        if (num > m)
            return 2;
    }

    return num == m;
}

int NthRoot(int n, int m)
{
    int low = 1;
    int high = m;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int temp = solve(mid, n, m);
        if (temp == 1)
        {
            return mid;
        }
        else if (temp == 2)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    cout << solve(8, 5, 32768);

    return 0;
}