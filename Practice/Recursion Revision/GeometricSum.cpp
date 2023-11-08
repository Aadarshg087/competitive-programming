#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double geometricSum(int k)
{
    if (k == 0)
        return 1;
    double res = geometricSum(k - 1);
    return res + (1 / pow(2, k));
}

int main()
{
    int k;
    cin >> k;
    cout << geometricSum(k) << endl;

    return 0;
}