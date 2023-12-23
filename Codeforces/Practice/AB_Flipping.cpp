#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    int count = 0;
    bool arr[s.size()] = {0};
    while (i != s.size() - 1)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && arr[i] == false)
        {
            swap(s[i], s[i + 1]);
            arr[i] = true;
            count++;
            i--;
            continue;
        }
        i++;
    }
    cout << count << endl;
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