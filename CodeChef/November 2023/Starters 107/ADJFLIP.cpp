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
        cin >> s;
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (!st.empty() && st.top() == s[i])
                st.pop();
            else
                st.push(s[i]);
        }

        if (st.size() <= 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
