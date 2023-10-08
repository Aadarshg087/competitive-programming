#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertAtIndex(int *arr, int n, int index, int element)
{
    for (int i = n - 2; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = element;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int index, element;
    cin >> index >> element;

    insertAtIndex(arr, n, index, element);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}