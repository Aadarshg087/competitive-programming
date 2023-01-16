#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void removeAllOccurencesOfChar(char input[], char c)
{
    int location = 0;
    int length = strlen(input);
    for (int i = 0; i < length; i++)
    {
        if (input[i] != c)
        {
            input[location] = input[i];
            location++;
        }
    }
    input[location] = '\0';
}
int main()
{
    char input[100];
    cin >> input;
    char c;
    cin >> c;
    removeAllOccurencesOfChar(input, c);
    cout << input << endl;
    return 0;
}