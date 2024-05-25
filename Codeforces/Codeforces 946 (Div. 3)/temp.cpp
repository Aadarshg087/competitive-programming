#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

int main()
{
    int a = 4;
    int b = 2;
    cout << a / b << endl;
    cout << (a + b - 1) / 2 << endl;
    cout << (2 * a + b) / (2 * b) << endl;
    
    return 0;
}