#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int allIndices(int input[], int size, int x, int output[])
{
    if (size == 0)
    {
        return 0;
    }
    int ans = allIndices(input, size - 1, x, output);
    if (input[size - 1] == x)
    {
        output[ans] = size - 1;
        return ans + 1;
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

    int output[100];
    int res = allIndices(input, size, x, output);

    for (int i = 0; i < res; i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}