#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// I APPROACH
// bool isPermutation(char input1[], char input2[])
// {
//     int length1 = strlen(input1);
//     int length2 = strlen(input2);

//     int k = 0;

//     if (length1 != length2)
//     {
//         return false;
//     }

//     for (int i = 0; i < length1; i++)
//     {
//         for (int j = 0; j < length2; j++)
//         {
//             if (input1[i] == input2[j])
//             {
//                 input2[j] = '.';
//                 k = 1;
//                 break;
//             }
//         }
//         if (k == 0)
//         {
//             return false;
//         }
//     }

//     for (int i = 0; i < length2; i++)
//     {
//         if (input2[i] != '.')
//         {
//             return false;
//             break;
//         }
//     }
//     return true;
// }


// II APPROACH
bool isPermutation(char input1[], char input2[])
{
    int arr[256] = {0};
    int length1 = strlen(input1);
    int length2 = strlen(input2);
    if (length1 != length2)
    {
        return false;
    }

    for (int i = 0; i < length1; i++)
    {
        arr[input1[i]]++;
    }

    for (int i = 0; i < length1; i++)
    {
        arr[input2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char input1[100];
    char input2[100];
    cin >> input1;
    cin >> input2;

    if (isPermutation(input1, input2))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}