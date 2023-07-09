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
        string arr[n];
        int count_A = 0;
        int count_B = 0;
        int count_AB = 0;
        int count_O = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == "A")
            {
                count_A++;
            }
            else if (arr[i] == "B")
            {
                count_B++;
            }
            else if (arr[i] == "AB")
            {
                count_AB++;
            }
            else if (arr[i] == "O")
            {
                count_O++;
            }
        }

        int max_A_B = max(count_A, count_B);

        cout << max_A_B + count_AB + count_O << endl;
    }

    return 0;
}