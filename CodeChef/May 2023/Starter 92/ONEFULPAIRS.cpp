#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = a + b + (a * b);
    if (ans == 111)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}