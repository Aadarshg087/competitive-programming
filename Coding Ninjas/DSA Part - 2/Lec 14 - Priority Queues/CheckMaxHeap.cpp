#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isMaxHeap(int arr[], int n)
{
    int parentIndex = 0;
    int leftChildIndex = 2 * parentIndex + 1;
    int rightChildIndex = 2 * parentIndex + 2;

    bool ans = true;

    while (leftChildIndex < n)
    {
        if (arr[leftChildIndex] > arr[parentIndex])
        {
            ans = false;
            break;
        }

        if (rightChildIndex < n && arr[rightChildIndex] > arr[parentIndex])
        {
            ans = false;
            break;
        }
        parentIndex = parentIndex + 1;
        leftChildIndex = 2 * parentIndex + 1;
        rightChildIndex = 2 * parentIndex + 2;
    }
    return ans;
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
    cout << isMaxHeap(arr, n) << endl;

    return 0;
}