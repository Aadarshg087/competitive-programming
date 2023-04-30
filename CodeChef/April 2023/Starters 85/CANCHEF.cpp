#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int total_distance, petrol;
        cin >> petrol >> total_distance;
        if ((petrol * 15) >= (2 * total_distance))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}