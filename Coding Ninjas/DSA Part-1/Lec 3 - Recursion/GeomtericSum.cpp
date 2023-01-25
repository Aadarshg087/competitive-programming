#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double geometricSum(int k)
{
    if (k == 0)
    {
        return 1;
    }
    double ans = geometricSum(--k);
    k++;
    ans = ans + (1 / (pow(2, k)));

    return ans;
}

int main()
{
    int k;
    cin >> k;
    cout << geometricSum(k) << endl;
    return 0;
}