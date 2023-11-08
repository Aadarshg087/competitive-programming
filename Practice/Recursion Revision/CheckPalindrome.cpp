#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char input[])
{
    if (strlen(input) == 1 || strlen(input) == 0)
        return true;

    if (input[0] != input[strlen(input) - 1])
        return false;

    input[strlen(input) - 1] = '\0';
    bool ans = checkPalindrome(input + 1);
    return ans;
}
int main()
{
    char input[50];
    cin >> input;
    if (checkPalindrome(input))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}