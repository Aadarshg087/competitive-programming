#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void trimSpaces(char input[])
{
    int len = strlen(input);
    int location = 0;
    for (int i = 0; i < len; i++)
    {
        if (input[i] != ' ')
        {
            input[location] = input[i];
            location++;
        }
    }
    input[location] = '\0';

    cout << input << endl;
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    trimSpaces(input);
    return 0;
}