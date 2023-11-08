#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countZeroes(int n)
{
    if (n == 0)
        return 1;
    if (n % 10 == n)
        return 0;

    int res = countZeroes(n / 10);
    if (n % 10 == 0)
        res++;
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << countZeroes(n) << endl;
    return 0;
}