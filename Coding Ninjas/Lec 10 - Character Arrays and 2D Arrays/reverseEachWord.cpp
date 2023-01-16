#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseEachWord(char input[])
{
    int length = strlen(input);
    int j = 0;
    for (int i = 0; i <= length; i++)
    {
        if (input[i] == ' ' || input[i] == '\0')
        {
            int k = i - 1;
            while (j < k)
            {
                char temp = input[j];
                input[j] = input[k];
                input[k] = temp;
                j++;
                k--;
            }
            j = i + 1;
        }
    }
    cout << input << endl;
}
int main()
{
    char input[100];
    cin.getline(input, 100, '\n');
    reverseEachWord(input);

    return 0;
}