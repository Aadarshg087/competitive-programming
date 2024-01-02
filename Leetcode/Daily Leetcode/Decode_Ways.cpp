#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int t[101];
int validString(int i, string s, int n)
{
    if (t[i] != -1)
        return t[i];
    if (n == 0)
        return t[i] = 1;
    if (s[i] == '0')
        return t[i] = 0;
    if (n == 1)
        return t[i] = 1;
    int num1 = validString(i + 1, s, n - 1);
    int num2 = 0;
    if (n >= 2 && (s[i] == '1' || (s[i] == '2' && s[i + 1] <= '6')))
    {
        num2 = validString(i + 2, s, n - 2);
    }

    return t[i] = num1 + num2;
}
int numDecodings(string s)
{
    // 0<s<27
    // no leading 0s

    memset(t, -1, sizeof(t));
    int n = s.size();
    return validString(0, s, n);
}

int main()
{

    return 0;
}