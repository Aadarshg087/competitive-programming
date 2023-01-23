#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int input[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smaller_sum = input[0] + sum(input + 1, n - 1);
    return smaller_sum;
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

    cout << sum(input, n);

    return 0;
}