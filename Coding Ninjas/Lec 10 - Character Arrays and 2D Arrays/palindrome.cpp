#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char str[])
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    int j = count - 1;
    for (int i = 0; i < count; i++)
    {
        if (i >= j)
        {
            return true;
        }
        else if (str[i] == str[j])
        {
            j--;
            continue;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    char str[100];
    cin >> str;
    cout << checkPalindrome(str) << endl;
    return 0;
}