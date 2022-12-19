#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void replaceCharacter(char input[], char c1, char c2)
{
    int i = 0;
    while (input[i] != '\0')
    {
        if (input[i] == c1)
        {
            input[i] = c2;
        }
        i++;
    }

    cout << input;
}

int main()
{
    char input[100];
    char c1;
    char c2;
    cin >> input;
    cin >> c1;
    cin >> c2;
    replaceCharacter(input, c1, c2);
    return 0;
}