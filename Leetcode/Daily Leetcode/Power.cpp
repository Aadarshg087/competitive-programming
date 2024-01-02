#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

double myPow(int x, int n)
{
    if (n >= 0)
    {

        if (n == 1)
        {
            return x;
        }
        double ans = x * myPow(x, n - 1);
        return ans;
    }
    else if (n < 0)
    {
        if (n == -1)
        {
            return x;
        }
        double ans = x * myPow(x, n + 1);
        return 1 / ans;
    }
    // ostringstream os;
    // os << fixed << setprecision(5) << x * myPow(x, n - 1);
}

int main()
{
    double x;
    int n;

    cin >> x >> n;
    cout << myPow(x, n) << endl;
    // cout << fixed << setprecision(5) << myPow(x, n) << endl;
    // float x = 2.10;
    // float y = 2.10;
    // cout << x * y << endl;
    // cout << fixed << setprecision(5) << x * y << endl;

    // cout << pow(2, -2) << endl;
    return 0;
}