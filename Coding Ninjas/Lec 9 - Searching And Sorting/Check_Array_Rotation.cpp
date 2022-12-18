#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    int smallest = 2147483647;
    int smallest_location;
    for (int i = 0; i < size; i++)
    {
        if (input[i] < smallest)
        {
            smallest = input[i];
            smallest_location = i;
        }
    }
    return smallest_location;
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

    cout << arrayRotateCheck(input, size);

    return 0;
}