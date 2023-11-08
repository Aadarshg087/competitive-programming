#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkNumber(int input[], int n, int x)
{

    if (input[0] == x)
        return true;
    else if (n == 0)
        return false;
    return checkNumber(input + 1, n - 1, x);

    // return false;
}

int main()
{
    int n, x;
    cin >> n;
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    cin >> x;
    if (checkNumber(input, n, x))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}