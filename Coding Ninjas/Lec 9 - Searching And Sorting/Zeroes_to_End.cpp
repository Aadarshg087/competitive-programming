#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
    int count = 0;
    int location = 0;
    int curr_element;
    for (int i = 0; i < size; i++)
    {
        if (input[i] != 0)
        {
            curr_element = input[i];
            input[location] = curr_element;
            location++;
            count++;
        }
    }

    for (int i = count; i < size; i++)
    {
        input[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;
    int input[size];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    pushZeroesEnd(input, size);

    return 0;
}