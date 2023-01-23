#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkNumber(int input[], int size, int x)
{
    if (size == 1 && input[0] != x)
    {
        return false;
    }
    if (input[0] == x)
    {
        return true;
    }
    bool number_present = checkNumber(input + 1, size - 1, x);
    return number_present;
}

int main()
{
    int x;
    int size;
    cin >> size;
    int input[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[size];
    }

    cin >> x;

    cout << checkNumber(input, size, x) << endl;

    return 0;
}