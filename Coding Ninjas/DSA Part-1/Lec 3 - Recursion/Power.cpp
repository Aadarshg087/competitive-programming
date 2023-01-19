#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    else if (n == 0)
    {
        return 1;
    }
    int smallOutput = x * power(x, n - 1);
    return smallOutput;
}

int main()
{
    int x;
    int n;
    cin >> x >> n;
    cout << power(x, n);
    return 0;
}