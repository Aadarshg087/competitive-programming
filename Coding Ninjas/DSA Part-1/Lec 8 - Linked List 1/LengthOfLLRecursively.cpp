#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = next;
    }
};

void insertNumberAt(int arr[], int i)
{
    if ()
    {
        return;
    }
    if (arr[0] < i && arr[1] >= i)
    {
        arr[2] = arr[1];
        arr[1] = i;
        insertNumberAt(arr + 1, i);
    }
    else
    {
        insertNumberAt(arr + 1, i);
    }
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);
    insertNumberAt(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}