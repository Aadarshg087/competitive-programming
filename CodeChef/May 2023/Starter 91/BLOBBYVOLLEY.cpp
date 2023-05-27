#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;
        int countA = 0;
        int countB = 0;
        char prev = s[0];
        for (int i = 0; i < size; i++)
        {
            if (s[i] == 'A' && prev == 'A')
            {
                countA++;
            }
            else if (s[i] == 'B' && prev == 'B' && i != 0)
            {
                countB++;
            }

            prev = s[i];
        }
        cout << countA << " " << countB << endl;
    }

    return 0;
}