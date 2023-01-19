#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void intersection(int input1[], int input2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (input1[i] == input2[j])
            {
                input2[j] = 0;
                cout << input1[i] << " ";
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size1, size2;
        cin >> size1;
        int input1[size1];
        for (int i = 0; i < size1; i++)
        {
            cin >> input1[i];
        }

        cin >> size2;
        int input2[size2];
        for (int i = 0; i < size2; i++)
        {
            cin >> input2[i];
        }

        intersection(input1, input2, size1, size2);
    }

    return 0;
}