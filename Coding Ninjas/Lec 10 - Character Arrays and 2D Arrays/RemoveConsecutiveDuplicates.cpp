#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char input[])
{
    int length = strlen(input);
    char last_char = input[0];
    int location = 1;
    for (int i = 1; i < length; i++)
    {
        if (input[i] != last_char)
        {
            input[location] = input[i];
            last_char = input[location];
            location++;
        }
    }
    input[location] = '\0';
}

int main()
{
    char input[100];
    cin >> input;
    removeConsecutiveDuplicates(input);
    cout << input << endl;
    return 0;
}