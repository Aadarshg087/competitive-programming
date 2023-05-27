#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int seat;
        cin >> seat;
        if (1 <= seat && seat <= 10)
        {
            cout << "Lower Double" << endl;
        }
        else if (seat <= 15)
        {
            cout << "Lower Single" << endl;
        }
        else if (seat <= 25)
        {
            cout << "Upper Double" << endl;
        }
        else
        {
            cout << "Upper Single" << endl;
        }
    }

    return 0;
}