#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int multiply = a * b;
    int addition = a + b;
    cout << abs(multiply - addition) << endl;
    return 0;
}