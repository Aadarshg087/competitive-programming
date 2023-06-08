#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int Alice, Bob;
        cin >> Alice >> Bob;
        int min_num = min(Alice, Bob);
        int max_num = max(Alice, Bob);

        int diff = max_num - min_num;
        if (diff % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}