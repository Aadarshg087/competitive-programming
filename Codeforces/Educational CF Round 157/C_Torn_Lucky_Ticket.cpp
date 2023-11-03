#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string *s = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        // For even size
        if (s[i].size() & 1 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j].size() & 1 == 0)
                {
                    string str = s[i] + s[j];
                    string temp1 = str.substr(0, (str.size() / 2));
                    string temp2 = str.substr((str.size() / 2));
                    int s1 = temp1.size();
                    int s2 = temp2.size();
                    int num1 = stoi(temp1);
                    int num2 = stoi(temp2);
                    int ans1 = 0;
                    while (s1 != 0)
                    {
                        ans1 = ans1 + num1 % 10;
                        num1 = num1 / 10;
                        s1--;
                    }
                    int ans2 = 0;
                    while (s2 != 0)
                    {
                        ans2 = ans2 + num2 % 10;
                        num2 = num2 / 10;
                        s2--;
                    }
                    if (ans1 == ans2)
                    {
                        // cout << temp1 << " " << temp2 << endl;
                        count++;
                    }
                }
            }
        }
        else
        { // For odd size
            for (int j = 0; j < n; j++)
            {
                if (s[j].size() & 1 == 1)
                {
                    string str = s[i] + s[j];
                    string temp1 = str.substr(0, (str.size() / 2));
                    string temp2 = str.substr((str.size() / 2));
                    int s1 = temp1.size();
                    int s2 = temp2.size();
                    // cout << temp1 << " " << temp2 << endl;
                    int num1 = stoi(temp1);
                    int num2 = stoi(temp2);
                    int ans1 = 0;
                    while (s1 != 0)
                    {
                        ans1 = ans1 + num1 % 10;
                        num1 = num1 / 10;
                        s1--;
                    }
                    int ans2 = 0;
                    while (s2 != 0)
                    {
                        ans2 = ans2 + num2 % 10;
                        num2 = num2 / 10;
                        s2--;
                    }
                    if (ans1 == ans2)
                    {
                        // cout << temp1 << " " << temp2 << endl;
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}