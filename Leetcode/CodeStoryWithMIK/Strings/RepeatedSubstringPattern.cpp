#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// O(n/2 * n)
bool check(string temp, string s)
{
    string sn = s.substr(0, temp.size());
    string temp2 = temp;
    if (temp.size() == 2)
        cout << temp << " " << sn << endl;
    while (temp.size() != s.size())
    {
        if (temp != sn)
        {
            return false;
        }
        temp += temp2;
        sn = s.substr(0, temp.size());
    }
    return temp == sn;
}
bool repeatedSubstringPattern(string s)
{
    int n = s.size();
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            string temp = s.substr(0, i);
            bool ans = check(temp, s);
            if (ans)
                return ans;
        }
    }
    return false;
}

int main()
{

    return 0;
}