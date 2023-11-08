#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void number(int n)
{
    if (n == 0)
    {
        return;
    }
    number(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    number(n);
    return 0;
}