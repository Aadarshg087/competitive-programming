#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
 - We start from the low and create a valid number in strings and insert in vector
 - Then, create a string of ones of size low. Keep adding that integer until last digit is equal to the 9.
 - Update and create a valid string of size s.size() + 1
 - Insert it to the vector

*/
#define ll long long
// int newString(int intS)
// {
//     string a = to_string(intS);
//     int size = a.size();
//     string temp = "";
//     char n = '1';
//     for (int i = 1; i <= size + 1; i++)
//     {
//         temp += n++;
//     }

//     return stol(temp);
// }

// vector<int> sequentialDigits(int low, int high)
// {
//     string s = to_string(low);
//     string digit = "1";
//     for (int i = 1; i < s.size(); i++)
//     {
//         s[i] = s[i - 1] + 1;
//         digit += '1';
//     }
//     vector<int> ans;
//     if (stoll(s) > low)
//     {
//         ans.push_back(stoll(s));
//     }
//     // cout << ans[0] << endl;
//     int intS = stoll(s);
//     int d = stoll(digit);
//     // cout << d << endl;
//     while (intS <= high)
//     {
//         if (intS % 10 == 9)
//         {

//             intS = newString(intS);
//             string c = to_string(d);
//             c += '1';
//             d = stoll(c);
//             if (intS <= high)
//                 ans.push_back(intS);
//             else
//                 break;
//         }
//         else
//         {
//             // cout << intS << endl;
//             intS += d;
//             if (intS <= high)
//                 ans.push_back(intS);
//             else
//                 break;
//         }
//     }
//     return ans;
// }

// Second Approach
vector<int> sequentialDigits(int low, int high)
{
    queue<int> q;
    for (int i = 1; i <= 8; i++)
    {
        q.push(i);
    }
    vector<int> res;
    while (!q.empty())
    {
        int num = q.front();
        q.pop();
        int ld = num % 10;
        if (num > high)
            break;

        if (num >= low && num <= high)
        {
            res.push_back(num);
        }
        if (ld != 9)
        {
            num = ((num * 10) + (ld + 1));
            q.push(num);
        }
    }
    return res;
}

vector<int> sequentialDigits(int low, int high)
{
    vector<int> db{12, 23, 34, 45, 56, 67, 78, 89,
                   123, 234, 345, 456, 567, 678, 789,
                   1234, 2345, 3456, 4567, 5678, 6789,
                   12345, 23456, 34567, 45678, 56789,
                   123456, 234567, 345678, 456789,
                   1234567, 2345678, 3456789,
                   12345678, 23456789,
                   123456789};

    int n = db.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (db[i] < low)
            continue;
        if (db[i] > high)
            break;
        ans.push_back(db[i]);
    }
    return ans;
}

int main()
{
    int low, high;
    cin >> low >> high;
    cout << low << " " << high << endl;
    vector<int> v = sequentialDigits(low, high);
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
    // string s = "1000000000";
    // cout << stoi(s) << endl;
    // cout << stoll(s) << endl;
    // cout << stoll(s) << endl;
    // cout << numeric_limits<int>::max() << endl;

    return 0;
}