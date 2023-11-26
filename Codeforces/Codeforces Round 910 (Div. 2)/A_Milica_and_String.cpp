#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    char arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 'B')
            count++;
    }

    if (count == k)
    {
        cout << 0 << endl;
        return;
    }
    int operations = 0;
    while (count != k)
    {
        if (k > count)
        {
            
        }
        else if (k < count)
        {

        }
        operations++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // solve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}