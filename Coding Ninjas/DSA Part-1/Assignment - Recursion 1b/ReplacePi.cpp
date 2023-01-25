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
void helper(char input[], int start, int len)
{
    if (start >= len - 1)
    {
        return;
    }
    if (input[start] == 'p' && input[start + 1] == 'i')
    {
        // cout << "3.14";
        input[start] = '3.';
        input[start + 1] = '14';
        start += 2;
        len++;
    }
    else
    {
        // cout << input[start];
        start++;
    }
    return helper(input, start, len);
}

void replacePi(char input[])
{
    int len = length(input);
    helper(input, 0, len);
    if (start >= len - 1)
    {
        return;
    }
    if (input[start] == 'p' && input[start + 1] == 'i')
    {
        // cout << "3.14";
        input[start] = '3.';
        input[start + 1] = '14';
        start += 2;
        len++;
    }
    else
    {
        // cout << input[start];
        start++;
    }
    return helper(input, start, len);
}

int main()
{
    char s[50];
    cin >> s;
    replacePi(s);
    return 0;
}