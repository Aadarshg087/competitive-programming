#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3; // 0101
    int pos = 2;

    // Get Operation
    int bitmask1 = 1 << 2;
    int ans1 = bitmask1 & n;
    cout << std::bitset<4>(ans1) << endl;
    if (ans1 == 0)
    {
        cout << "Bit was zero" << endl;
    }
    else
    {
        cout << "Bit was one" << endl;
    }

    int temp = 16;
    temp -= 1;
    cout << bitset<8>(temp) << endl;
    return 0;
}