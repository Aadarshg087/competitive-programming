#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    ll totalDays, minPoints, Ppoints, Lpoints;
    cin >> totalDays >> minPoints >> Lpoints >> Ppoints;
    int totalPraticals = totalDays / 7;
    if (totalDays % 7 != 0)
        totalPraticals++;

    ll DaysNeededP = totalPraticals / 2;
    if (totalPraticals % 2 != 0)
        DaysNeededP++;

    ll temp1 = (DaysNeededP * (2 * Ppoints)) + (DaysNeededP * Lpoints);
    

    ll currPoints = 0;
    ll ans = 0;

    currPoints += (2 * Ppoints) + Lpoints;

    while (minPoints > currPoints)
    {
        if (totalPraticals == 1)
        {
            currPoints += Ppoints + Lpoints;
            totalPraticals--;
            DaysNeededP--;
            ans++;
            // cout << "Hello" << endl;
        }
        else
        {
            if (DaysNeededP != 0)
            {
                currPoints += (2 * Ppoints) + Lpoints;
                totalPraticals -= 2;
                DaysNeededP--;
                ans++;
            }
            else
            {
                currPoints += Lpoints;
                ans++;
            }
        }
    }
    cout << totalDays - ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}