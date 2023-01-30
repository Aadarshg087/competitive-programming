#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == input[1])
    {
        for (int i = 1; input[i] != '\0'; i++)
        {
            input[i] = input[i + 1];
        }
        return removeConsecutiveDuplicates(input);
    }
    return removeConsecutiveDuplicates(input + 1);
}
int main()
{
    char input[100];
    cin >> input;
    removeConsecutiveDuplicates(input);
    cout << input << endl;
    return 0;
}