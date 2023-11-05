#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            temp = temp + i;
        }
    }

    if (temp == n)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}