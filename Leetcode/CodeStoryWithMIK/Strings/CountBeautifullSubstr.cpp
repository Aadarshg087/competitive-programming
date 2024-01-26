#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isVowel1(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int beautifulSubstrings(string s, int k)
{
    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int v = 0;
        int c = 0;
        for (int j = i; j < n; j++)
        {
            if (isVowel1(s[j]))
            {
                v++;
            }
            else
                c++;

            bool temp = (v * c) % k;
            if (v == c && !temp)
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{

    return 0;
}