#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<char> &chars, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << chars[i] << " ";
    }
    cout << endl;
}

int compress(vector<char> &chars)
{
    int n = chars.size();
    int count = 1;
    int j = 0;
    char element;
    for (int i = 0; i <= n - 1; i++)
    {
        element = chars[i];
        if (i != n - 1 && chars[i] == chars[i + 1])
        {
            count++;
        }
        else
        {
            chars[j++] = element;
            if (count > 1)
            {
                if (count > 9)
                {
                    string num = to_string(count);
                    for (int k = 0; k < num.size(); k++)
                    {
                        chars[j++] = num[k];
                    }
                }
                else
                {
                    string num = to_string(count);
                    chars[j++] = num[0];
                }
            }
            count = 1;
        }
    }

    return j;
}

int main()
{
    vector<char> chars = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'd', 'd'};
    for (int i = 0; i < chars.size(); i++)
        cout << chars[i] << " ";
    cout << endl;
    int size = compress(chars);
    cout << size << endl;
    printVector(chars, size);

    // char c = '9';
    // c++;
    // cout << c << endl;

    // // how can we convert the more than one digit number, since we cant contain it into character variable
    // string s = "1";
    // s[s.size() - 1]++;
    // cout << s << endl;

    // int j = 1;
    // string s = to_string(j);
    // cout << s << endl;

    return 0;
}