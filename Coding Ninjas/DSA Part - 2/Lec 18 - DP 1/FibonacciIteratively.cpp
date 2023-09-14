#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib_helper(int n, int *ans)
{
    for (int i = 2; i <= n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }

    return ans[n];
}

int fib(int n)
{
    int *ans = new int[n + 1];

    ans[0] = 0;
    ans[1] = 1;

    return fib_helper(n, ans);
}

int main()
{
    cout << fib(3) << endl;

    return 0;
}