#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Leaders(int arr[], int len)
{
    int k = 0;
    int output[len];
    int i = 0;
    while (i < len)
    {
        int j;
        for (j = i + 1; j < len; j++)
        {
            //
            if (arr[i] <= arr[j])
            {
                i = j;
                i--;
                output[k] = arr[j];
                k++;
                break;
            }
        }
        i++;
    }

    for (int i = 0; i < k; i++)
    {
        cout << output[i] << " ";
    }
}

int main()
{
    int len;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    cout << "hello" << endl;
    Leaders(arr, len);

    return 0;
}