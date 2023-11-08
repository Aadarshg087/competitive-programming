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
    int temp = len + 1;
    for (int i = len - 1; i > 1; i--)
    {
        input[temp] = input[i];
        cout << input[i] << " " << i << temp << endl;
        temp--;
    }
    input[0] = '3';
    input[1] = '.';
    input[2] = '1';
    input[3] = '4';
    input[len + 2] = '\0';
    cout << input << endl;
}




void replacePi(char input[])
{
    int len = length(input);
    if (len <= 1)
        return;
    if (input[0] == 'p' && input[1] == 'i')
        helper(input, len);
    replacePi(input + 1);
    return;
}

int main()
{
    char input[50];
    cin >> input;
    replacePi(input);
    cout << input << endl;
    return 0;
}