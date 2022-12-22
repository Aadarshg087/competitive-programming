#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void trimSpaces(char input[])
{
    int len = strlen(input);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (input[i] == ' ')
        {
            count++;
            for (int j = i + 1; j < len; j++)
            {
                input[j - 1] = input[j];
            }
        }
    }
    input[len - count] = '\0';
    cout << input;
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    trimSpaces(input);
    return 0;
}