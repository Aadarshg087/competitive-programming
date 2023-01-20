#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    if (n > 0 && n < 10)
    {
        return 1;
    }
    int count_digits = count(n / 10);
    int output = count_digits + 1;
    return output;
}

int main()
{
    int n;
    cin >> n;
    cout << count(n) << endl;
    return 0;
}