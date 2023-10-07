#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int NoOfBTs(int h)
{
    if (h == 1 || h == 0)
    {
        return h;
    }

    int num1 = NoOfBTs(h - 1);
    int num2 = NoOfBTs(h - 2);

    int ans = 4 * num1 + 2 * num2;
    return ans;
}

int main()
{
    int h;
    cin >> h;
    cout << NoOfBTs(h) << endl;
    return 0;
}