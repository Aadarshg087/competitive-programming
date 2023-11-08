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
    int i, temp;
    temp = 0;
    for (i = 1; i < len; i++)
    {
        input[temp] = input[i];
        temp++;
    }
    input[i - 1] = '\0';
}

void removeX(char input[])
{
    // int len = strlen(input);
    int len = length(input);
    if (len == 0)
        return;
    if (input[0] == 'x')
    {
        helper(input, len);
        removeX(input);
    }
    removeX(input + 1);
    return;
}

int main()
{
    char input[50];
    cin >> input;
    removeX(input);
    cout << input << endl;

    return 0;
}