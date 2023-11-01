#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int ans = max(a, max(b, c));
    if (ans == a)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    return 0;
}