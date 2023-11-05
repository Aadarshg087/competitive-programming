#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int first, second;
    cin >> first >> second;
    int mini = min(first, second);
    bool isCoPrime = true;
    for (int i = 2; i <= mini; i++)
    {
        isCoPrime = true;
        if (first % i == 0 && second % i == 0)
        {
            cout << "Numbers are not co prime" << endl;
            isCoPrime = false;
            break;
        }
    }

    if (isCoPrime)
    {
        cout << "Yes, the numbers are co prime" << endl;
    }

    return 0;
}