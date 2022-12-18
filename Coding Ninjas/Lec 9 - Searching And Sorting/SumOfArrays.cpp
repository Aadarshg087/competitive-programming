#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int more = max(size1, size2) + 1;
    if (size1 == 0 && size2 != 0)
    {
        int p = 1;
        output[0] = 0;
        for (int i = 0; i < size2; i++)
        {
            output[p] = input2[i];
            p++;
        }
    }
    else if (size1 != 0 && size2 == 0)
    {
        int p = 1;
        output[0] = 0;
        for (int i = 0; i < size1; i++)
        {
            output[p] = input1[i];
            p++;
        }
    }
    else
    {

        int j = size1 - 1;
        int k = size2 - 1;
        int l = more - 1;
        int carry = 0, rem, o;
        for (int i = 1; i < more; i++)
        {
            if (j < 0)
            {
                input1[j] = 0;
            }
            else if (k < 0)
            {
                input2[k] = 0;
            }
            o = input1[j] + input2[k] + carry;
            carry = 0;
            if (o > 9)
            {
                carry = o / 10;
                rem = o % 10;
                output[l] = rem;
            }
            else
            {
                output[l] = o;
            }
            j--;
            k--;
            l--;
        }
        if (carry > 0)
        {
            output[l] = carry;
        }
        else
        {
            output[l] = 0;
        }
    }
    for (int i = 0; i < more; i++)
    {
        cout << output[i] << " ";
    }
}

int main()
{
    int size1;
    cin >> size1;
    int input1[size1];

    for (int i = 0; i < size1; i++)
    {
        cin >> input1[i];
    }

    int size2;
    cin >> size2;
    int input2[size2];

    for (int i = 0; i < size2; i++)
    {
        cin >> input2[i];
    }
    int more = max(size1, size2);
    int output[more + 1];
    sumOfTwoArrays(input1, size1, input2, size2, output);
    return 0;
}