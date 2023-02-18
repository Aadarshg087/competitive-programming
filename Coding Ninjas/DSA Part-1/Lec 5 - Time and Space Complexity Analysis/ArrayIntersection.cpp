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
        input2[i] = input1[indexing];
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

void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge_array(arr, s, e);
}

void intersection(int arr1[], int arr2[], int n, int m)
{
    mergeSort(arr1, 0, n - 1);
    mergeSort(arr2, 0, m - 1);

    // Printing the both arrays
    cout << "Arr1: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Arr2: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int index1 = 0;
    int index2 = 0;
    while (index1 < n && index2 < m)
    {
        if (arr1[index1] == arr2[index2])
        {
            cout << arr1[index1] << " ";
        }
        if (arr1[index1] < arr2[index2])
        {
            index1++;
        }
        else
        {
            index2++;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, m;
        cin >> n;
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        cin >> m;
        int arr2[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        intersection(arr1, arr2, n, m);
    }
    return 0;
}