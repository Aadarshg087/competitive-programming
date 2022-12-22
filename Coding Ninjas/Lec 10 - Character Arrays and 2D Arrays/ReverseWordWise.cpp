#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseStringWordWise(char input[])
{
    // int len = strlen(input);
    int p = 0;
    int len = 0;
    while (input[p] != '\0')
    {
        len++;
        p++;
    }
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
    int k = 0;
    int l = len - 1;
    for (int i = 0; i <= len; i++)
    {
        if (input[i] == ' ' || input[i] == '\0')
        {
            l = i - 1;
            while (k < l)
            {
                char temp = input[k];
                input[k] = input[l];
                input[l] = temp;
                k++;
                l--;
            }
            k = i + 1;
        }
    }
    cout << input;
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    reverseStringWordWise(input);
    return 0;
}