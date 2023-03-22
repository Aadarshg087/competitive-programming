#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int points;
        cin >> points;
        if (points >= 1 && points < 100)
            cout << "Easy" << endl;
        else if (points >= 100 && points < 200)
            cout << "Medium" << endl;
        else if (points >= 200)
            cout << "Hard" << endl;
    }

    return 0;
}