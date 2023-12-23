#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

int f(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return f(n / 2);
    }

    return f(n / 2) + f(n / 2 + 1);
}

int problem(vector<int> v, int n, int k, auto it)
{
    cout << "yes reached is called" << endl;
    if (n == 1)
    {
        cout << v[0] << endl;
        return v[0];
    }
    if (it + k > v.end() - 1)
    {
        cout << "hell is called" << endl;
        int j = k;
        j -= (v.end() - 1 - it);
        it = v.begin();
        it += j;
        v.erase(it);
    }
    else
    {
        v.erase(it + k);
        it = it + k;
    }
    for (auto i : v)
        cout << i << " ";
    return problem(v, n - 1, k, it);
}

void solve()
{
    int n;
    int k = 3;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(i);
    }
    for (auto i : v)
        cout << i << " ";
    auto it = v.begin();
    cout << "by is called" << endl;
    cout << problem(v, n, k - 1, it) << endl;
    cout << endl;
    // cout << f(11) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    return 0;
}