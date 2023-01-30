#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int input[], int size)
{
    // Counting the elements smaller than the key
    int key = input[0];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] < key)
        {
            count++;
        }
    }

    // Replacing the key and first index value
    {
        int temp = input[count];
        input[count] = key;
        input[0] = temp;
    }

    // Swapping the elements to the corrects side
    int i = 0;
    int j = size - 1;
    while (i < count && j > count)
    {
        if (input[i] < key)
        {
            i++;
        }
        else if (input[j] > key)
        {
            j--;
        }
        else
        {
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            i++;
            j--;
        }
    }

    return count;
}
void helper(int input[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int location = partition(input, e + 1);
    helper(input, s, location - 1);
    helper(input, location + 1, e);
}
void quickSort(int input[], int size)
{
    helper(input, 0, size - 1);
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
    quickSort(input, size);

    return 0;
}