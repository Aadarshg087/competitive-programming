#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 3 5 7
    int correct = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == correct)
        {
            correct += 1;
        }
        else
        {
            cout << correct << endl;
            break;
        }
    }

    return 0;
}