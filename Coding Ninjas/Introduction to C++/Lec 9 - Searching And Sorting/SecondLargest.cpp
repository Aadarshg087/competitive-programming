#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int *input, int n)
{
    int largest = -2147483648;
    int second_largest = -2147483648;
    if (n <= 1)
    {
        return second_largest;
    }
    for (int i = 0; i < n; i++)
    {
        if (input[i] > largest)
        {
            second_largest = largest;
            largest = input[i];
        }
        else if (input[i] > second_largest && input[i] != largest)
        {
            second_largest = input[i];
        }
    }
    return second_largest;
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

    cout << findSecondLargest(input, n);

    return 0;
}