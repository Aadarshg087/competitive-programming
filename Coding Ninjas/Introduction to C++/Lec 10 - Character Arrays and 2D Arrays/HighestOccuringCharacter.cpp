#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char highestOccuringChar(char input[])
{
    int max_freq = 0;
    char max_freq_char;
    int length = strlen(input);
    for (int i = 0; i < length; i++)
    {
        int count = 1;
        if (input[i] != '.')
        {
            for (int j = i + 1; j < length; j++)
            {
                if (input[i] == input[j])
                {
                    input[j] = '.';
                    count++;
                }
            }
            if (count > max_freq)
            {
                max_freq = count;
                max_freq_char = input[i];
            }
        }
    }
    return max_freq_char;
}
int main()
{
    char input[100];
    cin >> input;
    cout << highestOccuringChar(input) << endl;
    return 0;
}