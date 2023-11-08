#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lastIndex(int input[], int size, int x)
{
    if (size == 0)
        return -1;
    int res = lastIndex(input + 1, size - 1, x);
    if (res != -1)
        return ++res;
    else if (input[0] == x)
        return 0;
    else
        return -1;
}

int main()
{
    int size;
    cin >> size;
    int input[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    int x;
    cin >> x;
    cout << lastIndex(input, size, x);

    return 0;
}