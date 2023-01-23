#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lastIndex(int input[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    if (input[size - 1] == x)
    {
        return size - 1;
    }
    int ans = lastIndex(input, size - 1, x);
    return ans;
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