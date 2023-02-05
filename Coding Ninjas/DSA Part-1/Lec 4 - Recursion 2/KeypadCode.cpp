#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int keypad(int num, string output[])
{
    if (num == 0)
    {
        return 1;
    }
    int rem = num % 10;
    
    num = num / 10;
    int ans = keypad(num, output);
}

int main()
{
    int num;
    cin >> num;
    string output[1000];
    int size = keypad(num, output);

    return 0;
}