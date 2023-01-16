#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void minLengthWord(char input[], char output[])
{
    int l = 0;
    int len = 0;
    while (input[l] != '\0')
    {
        len++;
        l++;
    }

    int min_freq = INT_MAX;
    int count = 0;
    int track_spaces = 0;
    int start_substring = 0;
    for (int i = 0; i <= len; i++)
    {
        if (input[i] != ' ' && input[i] != '\0')
        {
            count++;
        }
        else
        {
            if (i == len)
            {
                track_spaces = i + 1;
            }
            track_spaces = i;
            if (count < min_freq)
            {
                min_freq = count;
                int j = 0;
                for (int i = start_substring; i < track_spaces; i++)
                {
                    output[j] = input[i];
                    j++;
                }
                output[j] = '\0';
            }
            start_substring = track_spaces + 1;
            count = 0;
        }
    }

    cout << output << endl;
}

int main()
{
    char input[100];
    cin.getline(input, 100, '\n');

    char output[100];
    minLengthWord(input, output);
    return 0;
}