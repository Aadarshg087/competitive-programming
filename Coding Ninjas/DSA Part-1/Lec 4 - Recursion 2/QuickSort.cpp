#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int input[], int s, int e)
{
    // Counting the elements smaller than the key
    int key = input[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (input[i] < key)
        {
            count++;
        }
    }

    // Replacing the key and first index value
    {
        int temp = input[s + count];
        input[s + count] = key;
        input[s] = temp;
    }

    // Swapping the elements to the corrects side
    int i = s;
    int j = e;
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
    return s + count;
}
void helper(int input[], int s, int e)
{
    // Base Condition
    if (s >= e)
    {
        return;
    }
    
    // Location of partitioning
    int location = partition(input, s, e);

    // Recursion Calls
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

    for (int i = 0; i < size; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;

    return 0;
}