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
    string s;
    cin >> s;
    string t;
    cin >> t;
    int i, j;
    cin >> j >> i;
    if (j - i + 1 < t.size())
    {
        cout << "NO" << endl;
    }

    int n = s.size();
    int index = 0;
    int t1 = t.size() - 1;
    int k = n - 1;
    while (k >= 0)
    {
        while (index >= j && index <= i)
        {
            s[k] = t[t1--];
            index++;
            k--;
        }
        k--;
        index++;
    }

    cout << s << endl;

    return 0;
}