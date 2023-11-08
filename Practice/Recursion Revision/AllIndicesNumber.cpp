#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int allIndexes(int input[], int size, int x, int output[])
{
    if (size == 0)
        return 0;
    int ans = allIndexes(input, size - 1, x, output);
    if (input[size - 1] == x)
    {
        output[ans] = size - 1;
        return ++ans;
    }
    return ans;
}

int main()
{
    int size;
    int input[size];
    int output[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    int x;
    cin >> x;
    cout << allIndexes(input, size, x, output) << endl;

    return 0;
}