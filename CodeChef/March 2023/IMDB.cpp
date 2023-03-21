#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int no_of_movies, space_left;
        int ans, max_rating = 0;
        cin >> no_of_movies >> space_left;
        while (no_of_movies--)
        {
            int size, rating;
            cin >> size >> rating;
            if (size <= space_left && rating > max_rating)
            {
                max_rating = rating;
                ans = max_rating;
            }
        }
        cout << ans << endl;
    }

    return 0;
}