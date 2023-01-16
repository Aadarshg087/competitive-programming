#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// string getCompressedString(string &input)
// {
//     int length = input.length();
//     int location = 1;
//     int next_location = location + 1;
//     char prev_char = input[0];
//     int count = 49;
//     int i = 0;
//     while (i < length)
//     {
//         for (int j = i + 1; j < length; j++)
//         {
//             if (input[i] != input[j])
//             {
//                 i = j - 1;
//                 break;
//             }
//             else
//             {
//                 count++;
//                 input[location] = count;
//             }
//         }
//         i++;
//         location++;
//     }
//     input[location++] = '\0';
//     return input;
// }
// string getCompressedString(string &input)
// {
//     int length = input.length();
//     char prev_char = input[0];
//     int count = 49;
//     int location_num = 1;
//     int location_char = 1;
//     char count_char;

//     for (int i = 0; i < length; i++)
//     {
//         if (input[i] == '.')
//         {
//             continue;
//         }
//         for (int j = i + 1; j < length; j++)
//         {
//             if (input[i] == input[j])
//             {
//                 count++;
//                 input[j] = '.';
//                 input[location_num] = count;
//             }
//             else
//             {
//                 count = 49;
//                 prev_char = input[j];
//                 input[location_char] = input[j];
//                 break;
//             }
//         }
//     }
//     return input;
// }

string getCompressedString(string &input)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (input[i] != input[j])
            {
                break;
            }
        }
    }
}
string getCompressedString(string &input)
{
    // hghabff
    int length = input.length(); // 7
    char prev_char = input[0];   // h
    int count = 49;              // 1
    int location = 1;            // 1
    // string opStr;
    char count_char;
    for (int i = 1; i < length; i++)
    {
        if (input[i] == prev_char) // g !=h
        {
            count++;
            input[location] = count;
        }
        else
        {
            prev_char = input[i]; // prevchar = g
            count = 49;
            location++;                 // 2
            input[location] = input[i]; // hgg
            if (input[i] == input[i + 1])
            {
                location++; // 3
            }
            // else
            //     location--;
        }
    }
    if (length > 1)
    {
        input.erase(location + 1, length - location);
    }
    return input;
}

int main()
{
    string input;
    cin >> input;
    cout << getCompressedString(input) << endl;
    return 0;
}