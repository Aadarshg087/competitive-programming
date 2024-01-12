#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

ll arr[10001] = {0};
void solve()
{
    int k;
    cin >> k;
    cout << arr[k] << endl;
}
bool check(int num)
{
    string s = to_string(num);
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int r = s[i] - '0';
        sum += r;
    }
    return sum == 10;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    arr[1] = 19;
    int i = 2;
    int count = 1;
    while (i <= 10000)
    {
        ll temp = arr[i - 1] + 9 * count;
        if (check(temp))
        {
            arr[i] = temp;
            count = 1;
            i++;
        }
        else
        {
            count++;
        }
    }

    return 0;
}