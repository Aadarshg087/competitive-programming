#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printSubstring(char input[])
{
    int len = strlen(input);
    int limit;
    for (int i = 0; i < len; i++)
    {
        int limit = i;
        for (int k = i; k < len; k++)
        {
            int j = i;
            while (j <= limit)
            {
                cout << input[j];
                j++;
            }
            cout << endl;
            limit++;
        }
    }
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    printSubstring(input);
    return 0;
}