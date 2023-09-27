#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib_helper(int n, int *ans)
{
    if (n <= 1)
    {
        return 1;
    }

    if (ans[n] != -1)
    {
        return ans[n];
    }

    int num1 = fib_helper(n - 1, ans);
    int num2 = fib_helper(n - 2, ans);

    ans[n] = num1 + num2;

    return ans[n];
}

int fib(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        ans[i] = -1;
    }

    return fib_helper(n, ans);
}

int main()
{
    cout << fib(5) << endl;

    return 0;
}