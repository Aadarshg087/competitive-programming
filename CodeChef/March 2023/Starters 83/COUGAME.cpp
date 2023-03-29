#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int Boys, Girls;
        cin >> Girls >> Boys;
        // B>G;
        cout << Boys - Girls << endl;
    }

    return 0;
}