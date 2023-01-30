#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge_array(int input[], int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int input1[len1];
    int input2[len2];

    int indexing = s;
    for (int i = 0; i < len1; i++)
    {
        input1[i] = input[indexing];
        indexing++;
    }

    indexing = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        input2[i] = input[indexing];
        indexing++;
    }

    int index1 = 0;
    int index2 = 0;
    indexing = s;
    while (index1 < len1 && index2 < len2)
    {
        if (input1[index1] < input2[index2])
        {
            input[indexing] = input1[index1];
            indexing++;
            index1++;
        }
        else
        {
            input[indexing] = input2[index2];
            indexing++;
            index2++;
        }
    }

    while (index1 < len1)
    {
        input[indexing] = input1[index1];
        indexing++;
        index1++;
    }

    while (index2 < len2)
    {
        input[indexing] = input2[index2];
        indexing++;
        index2++;
    }
}

void helper(int input[], int s, int e)
{
    cout << "hello" << endl;
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    helper(input, s, mid);
    helper(input, mid + 1, e);
    cout << "merger fucntion" << endl;
    merge_array(input, s, e);
}

void mergeSort(int input[], int size)
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
    mergeSort(input, size);

    return 0;
}