#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a % b == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (a > b)
    {
        int num1 = a;
        int num2 = b;
        int count1 = 0;
        while (a % b != 0 && a > 0)
        {
            a--;
            b++;
            count1++;
        }
        int count2 = 0;
        while (num1 % num2 != 0 && num2 > 0)
        {
            num1++;
            num2--;
            count2++;
        }
        cout << min(count1, count2) << endl;
    }
    else
    {
        int count = 0;
        while (a % b != 0 && b > 0)
        {
            a++;
            b--;
            count++;
        }
        cout << count << endl;
    }
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