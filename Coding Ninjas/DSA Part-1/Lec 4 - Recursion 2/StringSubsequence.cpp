#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subseq(string input, string output[])
{
    if (input == "")
    {
        return 1;
    }
    string smallString = input.substr(1);
    int smallOutputSize = subseq(smallString, output);
    for (int i = 0; i < smallOutputSize; i++)
    {
        output[i + smallOutputSize] = input[0] + output[i];
    }
    return 2 * smallOutputSize;
}

int main()
{
    string input;
    cin >> input;
    string output[1000];
    int count = subseq(input, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}