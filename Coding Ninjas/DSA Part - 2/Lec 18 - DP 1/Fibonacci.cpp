#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Time complexity -> O(2^n);
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int a = fib(n - 1);
    int b = fib(n - 2);
    return a + b;
}

// Time complexity -> O(n)
int fib2_helper(int n, int *ans)
{
    // Base case
    if (n <= 1)
    {
        return n;
    }

    // Check if the element already exists
    if (ans[n] != -1)
    {
        return ans[n];
    }

    // Recursive calls
    int a = fib2_helper(n - 1, ans);
    int b = fib2_helper(n - 2, ans);

    // Save the answer for future use
    ans[n] = a + b;

    return ans[n];
}

int fib2(int n)
{
    int *ans = new int[n + 1];

    // Initiailzeing the array
    for (int i = 0; i <= n; i++)
    {
        ans[i] = -1;
    }

    return fib2_helper(n, ans);
}

int main()
{

    cout << fib2(4) << endl;

    return 0;
}