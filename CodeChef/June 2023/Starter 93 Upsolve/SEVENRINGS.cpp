#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        long long bill = n * x;
        int count = 0;
        bool isValid = true;
        for (int i = 0; bill != 0; i++)
        {
            bill /= 10;
            count++;
            if (count > 5)
            {
                isValid = false;
                break;
            }
        }
        if (isValid == true && count == 5)
        {
            cout << "YES" << endl;
        }
        else if (isValid == false || count < 5)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}