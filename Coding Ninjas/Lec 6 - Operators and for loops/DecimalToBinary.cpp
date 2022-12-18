#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long long ans = 0;
    long long placeValue = 1;
    while (n != 0)
    {
        int rem = n % 2;
        // cout << rem << " ";
        ans = ans + (rem * placeValue);

        n = n / 2;
        placeValue = placeValue * 10;
        // cout << placeValue << " " << endl;
    }
    cout << ans << endl;

    return 0;
}