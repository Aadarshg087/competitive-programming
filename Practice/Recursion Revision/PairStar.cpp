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

    return count++;
}

void helper(char input[], int len)
{

    int temp = len;
    for (int i = len - 1; i >= 0; i--)
    {
        input[temp] = input[i];
        temp--;
    }
    input[0] = '*';
    input[len + 1] = '\0';
}

void pairStar(char input[])
{
    int len = length(input);
    if (len == 1)
        return;
    if (input[0] == input[1])
        helper(input + 1, len - 1);
    pairStar(input + 1);
    return;
}

int main()
{
    char input[50];
    cin >> input;
    pairStar(input);
    cout << input << endl;
    return 0;
}