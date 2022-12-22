#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSubstring(char input[])
{
    int len = strlen(input);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                cout << input[i];
            }
            cout << endl;
        }
    }
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    printSubstring(input);
    return 0;
}