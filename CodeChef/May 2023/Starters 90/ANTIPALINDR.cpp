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
        char input[n];
        cin >> input;

        int count = 0;
        int temp = 49;
        int parity = 0;
        for (int i = 0; i < n; i++)
        {
            if (input[i] > 48 && input[i] < 90)
                continue;
            count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (input[i] == input[j])
                {
                    input[j] = temp;
                    count++;
                }
            }

            if (count % 2 == 0)
            {
                input[i] = temp;
                temp++;
            }
            else if (count == 1)
            {
                parity++;
            }
            else if (count % 2 != 0)
            {
                temp++;
                parity++;
            }
        }

        int track = 0;
        for (int i = 0; i < n; i++)
        {
            if (track == 2)
            {
                break;
            }
            if (input[i] > 96)
            {
                track++;
            }
        }
        cout << "track " << track << endl;

        if (track >= 2)
        {
            cout << 0 << endl;
        }
        else
        {
                }

        cout << "parity " << parity << endl;
        for (int i = 0; i < n; i++)
        {
            cout << input[i] << " ";
        }
    }

    return 0;
}