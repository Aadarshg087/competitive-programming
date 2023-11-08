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

int helper(int res, int zeros)
{
    for (int i = 1; i <= zeros; i++)
    {
        res = res * 10;
    }
    return res;
}

int stringToNumber(char input[])
{
    int len = length(input);
    if (len == 0)
        return 0;
    int res = input[0] - 48;
    int num = helper(res, len - 1);
    return num + stringToNumber(input + 1);
}

int main()
{
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
    return 0;
}