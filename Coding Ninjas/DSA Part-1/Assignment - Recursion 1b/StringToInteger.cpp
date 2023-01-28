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
int helper(int num, int zeros)
{
    for (int i = 1; i <= zeros; i++)
    {
        num = num * 10;
    }
    return num;
}
int stringToNumber(char input[])
{
    int len = length(input);
    if (len == 0)
    {
        return 0;
    }
    int b = input[0] - 48;
    int prev = helper(b, len - 1);
    return prev + stringToNumber(input + 1);
}

int main()
{
    char input[50];
    cin >> input;
    cout << stringToNumber(input);
    return 0;
}