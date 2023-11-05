#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5; // 0101
    int pos = 2;

    cout << bitset<4>(n) << endl;

    // Get Operation
    /*
        int bitmask1 = 1 << pos;
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
    */

    // To print the binary representation of a number
    /*
        // int temp = 16;
        // cout << bitset<8>(temp) << endl;

    */

    // Set Operation
    /*
    //int bitMask2 = 1 << pos;
    int ans2 = bitMask2 | n;

    cout << bitset<4>(ans2) << endl;
    cout << ans2 << endl;
    */

    // Clear operation
    /*
        int bitMask3 = 1 << pos;
        int ans3 = n & (~(bitMask3));
        cout << bitset<4>(ans3) << endl;
        cout << ans3 << endl;
    */

    // Toggle operation
    /*
        int bitMask4 = 1 << pos;
        int ans4 = n ^ bitMask4;
        cout << bitset<4>(ans4) << endl;
        cout << ans4 << endl;
    */

    // To check the number is even or odd
    /*
        if ((n & 1) == 0)
        {
            cout << "Number is even" << endl;
        }
        else
        {
            cout << "Number is odd" << endl;
        }
    */

    // To check if a number is a power of 2
    /*
        if ((n & (n - 1)) == 0)
        {
            cout << "The number is a power of 2" << endl;
        }
        else if ((n & (n - 1)) > 0)
        {
            cout << "The number is not a power of 2" << endl;
        }
    */

    // Multiply the number with 2^k
    /*
        int temp = n << 2;
        cout << temp << endl; // mulitplying with 2^2
    */

    // Divide the number with 2^k
    /*
        int temp2 = n >> 2;
        cout << temp2 << endl; // dividing with 2^2
    */

    // Find out x % (2^k)
    /*
        int temp3 = n & ((1 << 2) - 1); // remainder when n % 2^2
        cout << temp3 << endl;
    */

    // Swap two number without using third variable
    /*
        int x = 2;
        int y = 3;
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        cout << x << " " << y << endl;
    */

    // Find the number of set bits in a number O(1)
    /*
        // __builtin_popcountll(n); // if number is long long
        int temp4 = __builtin_popcount(n); // if number is integer
        cout << temp4 << endl;
    */

    return 0;
}