#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int students, tickets;
        cin >> students >> tickets;
        if (tickets > students)
            cout << 0 << endl;
        else
            cout << students - tickets << endl;
    }

    return 0;
}