#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Completed

string solve(int i, int n, string s)
{
    if (i == n)
    {
        return s;
    }

    int count = 1;
    string temp = "";
    // 11232 -> 21121312
    if (s == "1")
    {
        temp = "11";
    }
    else
    {
        bool check = false;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                temp += to_string(count);
                temp += s[i];
                count = 1;
                check = true;
            }
            else
            {
                count++;
                check = false;
            }
        }

        if (check == false || s[s.size() - 1] != s[s.size() - 2])
        {
            temp += to_string(count);
            temp += s[s.size() - 1];
        }
    }
    cout << i << endl;
    return solve(i + 1, n, temp);
}

string countAndSay(int n)
{
    // read it and convert the sentence into numbers
    // 12334 -> "11122314"
    // Base case -> countAndSay(1) -> "1"

    return solve(1, n, "1");
}

int main()
{
    int n;
    cin >> n;
    cout << countAndSay(n) << endl;

    return 0;
}