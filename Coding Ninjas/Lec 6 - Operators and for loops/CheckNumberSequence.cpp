#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;

    int curr, prev, check = 0;
    bool filter = true;

    cin >> k;
    prev = k;
    int count = 2;
    while (count <= n)
    {
        cin >> k;
        curr = k;
        if (prev == curr)
        {
            cout << "false" << endl;
            filter = false;
            exit(EXIT_SUCCESS);
        }
        else if (prev > curr)
        {
            if (check == 2 || check == 3)
            {
                check = 3;
            }
            else if (check == 4)
            {
                cout << "false" << endl;
                filter = false;
                exit(EXIT_SUCCESS);
            }
            else
            {
                check = 1;
            }
        }
        else
        {
            if (check == 1 || check == 4)
            {
                check = 4;
            }
            else if (check == 3)
            {
                cout << "false" << endl;
                filter = false;
                exit(EXIT_SUCCESS);
            }
            else
            {
                check = 2;
            }
        }
        prev = curr;
        count++;
    }

    if (filter)
    {
        cout << "true" << endl;
    }

    return 0;
}