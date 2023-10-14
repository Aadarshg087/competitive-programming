#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseWord(string word)
{
    int i = 0;
    int j = word.length() - 1;
    while (i < j)
    {
        int temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }

    return word;
}

int main()
{
    string word;
    cin >> word;

    cout << reverseWord(word) << endl;
    return 0;
}