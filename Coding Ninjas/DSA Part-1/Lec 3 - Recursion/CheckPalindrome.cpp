#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int helper(char input[], int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    if (input[start] != input[end])
    {
        return 0;
    }
    return helper(input, start + 1, end - 1);
}

bool checkPalindrome(char input[])
{
    int len = strlen(input);
    helper(input, 0, len - 1);
}

bool checkPalindrome(char input[])
{
    if (strlen(input) == 1 || strlen(input) == 0)
    {
        return true;
    }
    if (input[0] != input[strlen(input) - 1])
    {
        return false;
    }
    input[strlen(input) - 1] = '\0';
    bool ans = checkPalindrome(input + 1);
    return ans;
}

int main()
{
    char s[100];
    cin >> s;
    cout << checkPalindrome(s);

    return 0;
}