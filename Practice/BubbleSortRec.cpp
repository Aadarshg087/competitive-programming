#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void BubbleSortRec(vector<int> &v, int n, int i)
{
    if (n == 1)
    {
        return;
    }
    if (i == n - 1)
    {
        BubbleSortRec(v, n - 1, 0);
        return;
    }

    if (v[i] > v[i + 1])
    {
        swap(v[i], v[i + 1]);
    }
    BubbleSortRec(v, n, i + 1);
}

void BubbleSort(vector<int> &v, int n, int i)
{
    if (i == n - 1)
        return;

    if (v[i] > v[i + 1])
    {
        swap(v[i], v[i + 1]);
    }
    BubbleSort(v, n, i + 1);
}

void BubbleSort(int *arr, int n, int i)
{
    if (i == n - 1)
        return;

    if (arr[i] > arr[i + 1])
    {
        swap(arr[i], arr[i + 1]);
    }
    BubbleSort(arr, n, i + 1);
}

int main()
{
    int n = 5;
    vector<int> v{5, 2, 4, 3, 1};
    // int arr[] = {5, 2, 4, 3, 1};
    // for (int i = 0; i < n - 1; i++)
    // {
    //     // BubbleSort(v, n, 0);
    //     BubbleSort(arr, n, 0);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    BubbleSortRec(v, n, 0);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}