#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstIndex(int input[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    if (input[0] == x)
    {
        return 0;
    }
    int ans = firstIndex(input + 1, size - 1, x);
    if (ans == -1)
    {
        return ans;
    }
    else if (ans >= 0)
    {
        ans = ans + 1;
    }
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

    cout << firstIndex(input, size, x);

    return 0;
}