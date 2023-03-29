#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2)
{
    int gcd;
    for (int i = 1; i <= num1 / 2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num1, num2, num3, num4;
        cin >> num1 >> num2 >> num3 >> num4;
        // num1 % num2 = num3 % num4;
        // (num1 + X) % num2 = (num3 + X) % num3;
        int rem = num1 % num2;
        int gcd_ = gcd(num2, num4);
        int lcm = (num2 * num4) / gcd_;
        cout << lcm - rem << endl;
    }

    return 0;
}