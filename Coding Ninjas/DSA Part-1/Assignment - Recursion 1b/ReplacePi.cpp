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
    cout << len << endl;
    len += 2;
    input[len] = '\0';
    int location = len - 1;
    for (int i = location - 2; i >= 0; i--)
    {
        input[location] = input[i];
        location--;
    }
    input[0] = '3';
    input[1] = '.';
    input[2] = '1';
    input[3] = '4';
}

void replacePi(char input[])
{
    int len = length(input);
    if (len == 0 || len == 1)
    {
        return;
    }
    if (input[0] == 'p' && input[1] == 'i')
    {
        helper(input, len);
        return replacePi(input + 4);
    }
    else
    {
        return replacePi(input + 1);
    }
}

int main()
{
    char s[50];
    cin >> s;
    replacePi(s);
    cout << s;
    return 0;
}