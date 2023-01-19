#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int tripletSum(int input[], int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (input[i] + input[j] + input[k] == x)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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
        cout << tripletSum(input, size, x) << endl;
    }

    return 0;
}