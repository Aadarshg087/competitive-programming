#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

// static int count = 1;
unordered_set<string> st;
void distinctString(string &s)
{
    // cout << s << endl;
    if (s.size() == 1)
    {
        if (st.find(s) == st.end())
        {
            st.insert(s);
            // count++;
        }
        return;
    }
    if (st.find(s) == st.end())
    {
        st.insert(s);
        // count++;
    }
    string s1 = s.substr(1);
    string s2 = s.substr(0, 1) + s.substr(2);
    if (s.size() == 2)
    {
        s1 = s[0];
        s2 = s[1];
    }
    distinctString(s1);
    distinctString(s2);
    return;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    st.insert(s);
    distinctString(s);
    // cout << count << endl;
    cout << st.size() << endl;
    st.clear();
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}