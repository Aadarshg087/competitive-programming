#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Brute force approach (Getting TLE)
void approach1()
{
    long long int n, k;
    cin >> n >> k;

    long long int max = 0;
    long long int max_x = 0;
    for (int x = 0; x <= n; x++)
    {
        long long int ans1 = (x % k);
        long long int ans2 = ((n - x) % k);
        // cout << ans1 << " " << ans2 << endl;
        // cout << ans1 * ans2 << endl;
        long long int main_ans = ans1 * ans2;
        if (main_ans > max)
        {
            max = main_ans;
            max_x = x;
        }
        // cout << "ans: " << x << endl;
    }

    cout << max_x << endl;
}

void approach2()
{
    long long int n, k;
    cin >> n >> k;

    int ans1 = (n % k + k + 1) / 2;
    int ans2 = (n % k) / 2;
    if (ans1 > ans2)
        ans2 = ans1;
    cout << ans2 << endl;
}

void modCheck()
{
    int n, k;
    cin >> n >> k;
    bool check = false;
    int value = 0;
    for (int x = 1; x <= n; x++)
    {
        if ((x % k) > (n % k))
        {
            check = true;
            value = x;
            break;
        }
    }

    string result = (check == 1) ? "true" : "false";
    cout << result << " " << value << endl;
}
// Incomplete
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        // approach1();
        modCheck();
    }
    return 0;
}