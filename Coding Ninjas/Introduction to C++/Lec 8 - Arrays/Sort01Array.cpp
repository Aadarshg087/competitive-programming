#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortZeroesAndOne(int input[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] == 0)
        {
            count++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (i <= 2)
        {
            input[i] = 0;
        }
        else
        {
            input[i] = 1;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
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

        sortZeroesAndOne(input, size);
    }

    return 0;
}