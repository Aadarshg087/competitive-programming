#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5; // 0101
    int pos = 1;
    cout << bitset<4>(n) << endl;

    // Get the ith bit
    int ans = n & (1 << pos);
    if (ans == 0)
    {
        cout << "Bit was zero" << endl;
    }
    else
    {
        cout << "Bit was one" << endl;
    }

    // Set ith bit
    int ans1 = n | (1 << pos);
    cout << "Setting the bit ";
    cout << bitset<4>(ans1) << endl;

    // Clear the ith bit
    int ans3 = n & (~(1 << pos));
    cout << "Clearing the bit ";
    cout << bitset<4>(n) << endl;

    // toggle the ith bit
    int ans4 = n ^ (1 << pos);
    cout << "Toggling the bit ";
    cout << bitset<4>(ans4) << endl;
    cout << "Toggling the bit ";
    ans4 = ans4 ^ (1 << pos);
    cout << bitset<4>(ans4) << endl;

    return 0;
}