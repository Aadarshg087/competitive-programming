#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int chestPoint, keyPoint, seconds;
        cin >> chestPoint >> keyPoint >> seconds;
        int ans;
        if (chestPoint > keyPoint)
        {
            ans = keyPoint + (chestPoint - keyPoint);
            cout << ans << endl;
        }
        else
        {
            if (chestPoint + seconds >= keyPoint)
            {
                cout << keyPoint << endl;
            }
            else
            {
                chestPoint += seconds;
                int ans = chestPoint + (2 * (keyPoint - chestPoint));
                cout << ans << endl;
            }
        }
    }

    return 0;
}