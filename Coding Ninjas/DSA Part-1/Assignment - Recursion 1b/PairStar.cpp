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

void helper(char input[], int len)
{
    input[len + 1] = '0';
    len++;
    input[len + 1] = '\0';
    int location = len - 1;
    for (int i = location - 1; i >= 0; i--)
    {
        input[location] = input[i];
        location--;
    }
    input[0] = '*';
}

void pairStar(char input[])
{
    int len = length(input);
    if (len == 0 || len == 1)
    {
        return;
    }
    if (input[0] == input[1])
    {
        helper(input + 1, len);
    }
    return pairStar(input + 1);
}

int main()
{
    char input[50];
    cin >> input;
    pairStar(input);
    cout << input;
    return 0;
}