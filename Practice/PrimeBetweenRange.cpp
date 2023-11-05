#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int first;
    int second;
    bool isPrime = true;
    cin >> first >> second;
    for (int i = first; i <= second; i++)
    {
        isPrime = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << " is a Prime Number" << endl;
        }
    }

    return 0;
}