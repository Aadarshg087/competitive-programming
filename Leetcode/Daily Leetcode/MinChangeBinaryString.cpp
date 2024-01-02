#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minOperations(string s)
{
    int n = s.size();
    int start_zero = 0;
    int start_one = 0;

    for (int i = 0; i < n; i++)
    {
        if ((i & 1) == 0)
        {
            if (s[i] != '1')
                start_one++;
            if (s[i] != '0')
                start_zero++;
        }
        if ((i & 1) == 1)
        {
            if (s[i] != '0')
                start_one++;
            if (s[i] != '1')
                start_zero++;
        }
    }
    return min(start_one, start_zero);
}

int main()
{
    string s;
    cin >> s;
    cout << minOperations(s) << endl;

    return 0;
}