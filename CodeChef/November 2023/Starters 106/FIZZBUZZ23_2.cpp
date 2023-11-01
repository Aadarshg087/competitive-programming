#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int totalBuns, bunPerPerson, afterBun;
        cin >> totalBuns >> bunPerPerson >> afterBun;
        int temp = totalBuns / (bunPerPerson * 5);
        int ans = temp + afterBun;
        cout << ans << endl;
    }

    return 0;
}