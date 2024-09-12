#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    int countOnes = count(s.begin(), s.end(), '1');
    int countZeroes = count(s.begin(), s.end(), '0');
    int n = s.size();
    return (countOnes == 1 && countZeroes == n - 1);
}

int main()
{
    string s;
    cin >> s;
    int n = 1000;
    int ans = 0;
    while (n--)
    {
        if (check(s))
        {
            cout << 1 << endl;
            return 0;
        }
        ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int num = s[i] - '0';
            ans += num * num;
        }

        s = to_string(ans);
    }
    cout << 0 << endl;

    return 0;
}