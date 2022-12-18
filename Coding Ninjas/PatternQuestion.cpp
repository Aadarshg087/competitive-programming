#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = n / 2;
    int p = 1;

    // Rows till n/2 (5-> 0 - 2)
    for (int i = 0; i <= n / 2; i++)
    {
        // printing spaces
        for (int j = 1; j <= l; j++)
        {
            cout << " ";
        }

        // print * till p and increameting it by 2
        for (int k = 1; k <= p; k++)
        {
            cout << "*";
        }
        cout << endl;
        p = p + 2;
        l--;
    }

    // printing the rest of the pattern
    // fixing the value of l and p
    l = 1;
    p = p - 4;
    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= p; k++)
        {
            cout << "*";
        }
        cout << endl;
        p = p - 2;
        l++;
    }

    return 0;
}