#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

int main()
{
    int n = 5;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i + j >= n - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i + j == n - 1 || i == j)
    //         {
    //             cout << "*";
    //         }
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i >= j)
    //         {
    //             cout << "*";
    //         }
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2 * n - 1; j++)
    //     {
    //         if (i + j >= n - 1 && i >= j - n + 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     int j = 0;
    //     for (j = 0; j < 4 * n + 5; j++)
    //     {
    //         if (i == j % 4 || i + j % 4 == n - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }
    char a = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (i == j % 8 || i + j % 8 == 8)
            {
                cout << char('A' + j);
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}