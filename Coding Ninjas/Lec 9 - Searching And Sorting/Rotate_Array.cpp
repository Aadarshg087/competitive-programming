#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(int *input, int d, int n)
{
    // 1 APPROACH - TLE Issue in this approach (Brute Force)
    // for (int i = 1; i <= d; i++)
    // {
    //     int curr = input[0];
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         input[j] = input[j + 1];
    //     }
    //     input[n - 1] = curr;
    // }

    // 2 APPROACH - Using another array to store the integer that needs to adjusted
    // int ans[d];
    // for (int i = 0; i < d; i++)
    // {
    //     ans[i] = input[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     input[i] = input[i + d];
    // }

    // int j = 0;
    // for (int i = n - d; i < n; i++)
    // {
    //     input[i] = ans[j];
    //     j++;
    // }

    // 3 APPROACH - Reversing the whole arary, then reversing again the d part & n-d part
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i <= j)
        {
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            j--;
        }
        else
        {
            break;
        }
    }

    int k = (n - d) - 1;
    for (int i = 0; i < n - d; i++)
    {
        if (i <= k)
        {
            int temp = input[i];
            input[i] = input[k];
            input[k] = temp;
            k--;
        }
        else
        {
            break;
        }
    }
    int l = n - 1;
    for (int i = n - d; i < n; i++)
    {
        if (i <= l)
        {
            int temp = input[i];
            input[i] = input[l];
            input[l] = temp;
            l--;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
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
    int d;
    cin >> d;

    rotate(input, d, n);

    return 0;
}