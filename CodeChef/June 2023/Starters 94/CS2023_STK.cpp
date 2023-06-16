#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        int count_om = 0;
        int location_prev = 0;
        int location_ahead = 0;
        int diff = 0;
        int count_addy = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr1[i] == 0)
            {
                location_ahead = i;
            }

            if ((location_ahead - (location_prev + 1)) > diff)
            {
                count_om = (location_ahead - location_prev);
            }
            location_prev = location_ahead;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr1[i] == 0)
            {
                location_ahead = i;
            }

            if ((location_ahead - location_prev) > diff)
            {
                count_addy = (location_ahead - location_prev) - 1;
            }
        }

        if (count_om > count_addy)
        {
            cout << "Om" << endl;
        }
        else if (count_om < count_addy)
        {
            cout << "Addy" << endl;
        }
        else if (count_om == count_addy)
        {
            cout << "Draw" << endl;
        }
    }

    return 0;
}