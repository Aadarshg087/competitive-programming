#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

vector<int> findDivisors(int n)
{
    vector<int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            // if (n / i != i)
            //     ans.push_back(n / i);
        }
    }
    return ans;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> divisors = findDivisors(n);
    for (int i = 0; i < divisors.size(); i++)
    {
        cout << divisors[i] << " ";
    }
    cout << endl;
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