#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int temp = 1;
    for (int i = 2; i <= n; i++)
    {
        temp *= i;
    }
    return temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp1 = fact(n);
        int temp2 = fact(n - 2);

        int ans = temp1 / temp2;
        cout << ans << endl;
    }

    return 0;
}