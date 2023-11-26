#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int

int fact(int n)
{
    if (n == 0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void solve()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int ans2 = nCr(n, 3);

    int i = 1, j = 2, k = 3;
    int ans = 0;
    int count = 0;
    while (i <= n - 2 && j <= n - 1)
    {
        int min1 = min(arr[i], arr[j]);
        int min2 = min(arr[j], arr[k]);
        int gcd = __gcd(min1, min2);
        ans += gcd;
        // cout << i << " " << j << " " << k << " " << gcd << endl;

        if (j == n - 1)
        {
            i++;
            j = i + 1;
            k = j + 1;
        }
        else if (k == n)
        {
            j++;
            k = j + 1;
        }
        else
        {
            k++;
        }
        count++;
    }
    cout << ans << endl;
    // cout << ans2 << endl;
    // cout << count << endl;
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