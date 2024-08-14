#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int temp1 = max(a, b);
    int temp2 = max(temp1, c);
    int temp3 = max(temp2, d);
    cout << temp3 << endl;

    return 0;
}