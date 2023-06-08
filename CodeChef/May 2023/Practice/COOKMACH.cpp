#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int initial, destination;
        int count = 0;
        cin >> initial >> destination;
        while (destination % initial != 0)
        {
            initial /= 2;
            count++;
        }
        while (destination != initial)
        {
            initial *= 2;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}