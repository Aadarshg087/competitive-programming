#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int numberEpisodes, evenMinutes, oddMinutes;
        cin >> numberEpisodes >> evenMinutes >> oddMinutes;
        if (numberEpisodes % 2 == 0)
        {
            int result = (numberEpisodes / 2) * evenMinutes + (numberEpisodes / 2) * oddMinutes;
            cout << result << endl;
        }
        else
        {
            int part1 = ((numberEpisodes / 2) + 1) * oddMinutes;
            int part2 = (numberEpisodes / 2) * evenMinutes;
            cout << part1 + part2 << endl;
        }
    }

    return 0;
}