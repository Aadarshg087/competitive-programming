#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int input[], int n, int val)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (input[mid] == val)
        {
            return mid;
        }
        else if (input[mid] < val)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int val;
        cin >> val;
        cout << binarySearch(input, n, val) << endl;
    }

    return 0;
}