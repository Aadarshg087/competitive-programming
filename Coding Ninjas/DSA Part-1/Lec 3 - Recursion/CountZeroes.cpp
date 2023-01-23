#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countZereos(int n)
{
    if (n >= 1 && n <= 9)
    {
        return 0;
    }
    if (n % 10 == 0)
    {
        
    }
}

int main()
{
    int n;
    cin >> n;
    cout << countZereos(n) << endl;
    return 0;
}