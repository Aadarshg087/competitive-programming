#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int total_guests, total_fruits, total_vegies, total_fish;
        int dish_prepared;
        cin >> total_guests >> total_fruits >> total_vegies >> total_fish;
        int vegies_needed = total_fruits + total_fish;
        if (vegies_needed < total_vegies)
        {
            dish_prepared = vegies_needed;
        }
        else
        {
            dish_prepared = total_vegies;
        }
        if (dish_prepared >= total_guests)
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