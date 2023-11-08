#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkAB(char input[])
{
    // int len = length(input);
    if (input[0] == '\0')
        return true;
    if (input[0] == 'a')
    {
        if (input[0] == 'a' && (input[1] == '\0' || input[1] == 'a' || (input[1] == 'b' && input[2] == 'b')))
            return checkAB(input + 1);
    }
    else if ((input[0] == 'b' && input[1] == 'b') && (input[2] == '\0' || input[2] == 'a'))
        return checkAB(input + 2);
    return false;
}

int main()
{
    char input[50];
    cin >> input;
    if (checkAB(input))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}