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
        cin >> initial >> destination;

        if (destination < initial)
        {
            int i;
            for (i = 0; destination != initial; i++)
            {
                initial /= 2;
            }
            cout << i << endl;
            continue;
        }

        int i;
        for (i = 0; destination != 1; i++)
        {
            destination /= 2;
        }
        bool isPower2 = true;
        bool isOdd = false;
        int j, k;

        if (initial % 2 == 0)
        {
            for (j = 0; initial != 1; j++)
            {
                if (initial % 2 != 0)
                    isPower2 = false;
                initial /= 2;
            }
        }
        else if (initial % 2 != 0)
        {
            for (k = 0; initial != 1; k++)
            {
                initial /= 2;
            }
            isOdd = true;
        }

        if (isPower2 == false && isOdd == false)
        {
            cout << i + j << endl;
        }
        else if (isOdd == true)
        {
            cout << i + k << endl;
        }
        else if (isPower2 == true)
        {
            cout << i - j << endl;
        }
    }

    return 0;
}