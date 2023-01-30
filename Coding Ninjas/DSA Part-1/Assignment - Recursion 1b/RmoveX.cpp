#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int len(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void helper(char input[])
{
    int location = 0;
    for (int i = 1; input[i] != '\0'; i++)
    {
        input[location] = input[i];
        location++;
    }
    input[location] = '\0';
}

void removeX(char input[])
{
    int length = len(input);
    if (length == 0)
    {
        return;
    }
    if (input[0] == 'x')
    {
        // input[0] = input[1];
        helper(input);
        return removeX(input);
    }
    return removeX(input + 1);
}

int main()
{
    char s[100];
    cin >> s;
    removeX(s);
    cout << s << endl;
    return 0;
}