#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i += 2)
        {
            if (s[i] != s[i + 1])
            {
                cout << "No" << endl;
                break;
            }
        }
    }
    return 0;
}