#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

void printContainers(multiset<ll> &mp, vector<int> &power)
{
    for (auto i : mp)
        cout << i << " ";
    cout << endl;
    cout << "printing the vector: ";
    for (auto i : power)
        cout << i << " ";
    cout << endl;
}

void insert(multiset<ll> &mp, vector<int> &power, int element)
{
    power[element]++;
    mp.insert(1LL << element);
}

bool possibleSubset(multiset<ll> &mp, vector<int> &power, ll sum)
{
    // while (sum != 0)
    // {
    //     auto it = mp.upper_bound(sum);
    //     it--;
    // }
    return true;
}

bool possible(vector<int> &ans, int sum)
{
    for (auto i : ans)
        cout << i << " ";
}

void solve()
{
    int m;
    cin >> m;
    vector<int> power(30, 0);
    multiset<ll> mp;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            int t;
            cin >> t;
            insert(mp, power, t);
        }
        else if (temp == 2)
        {
            ll sum;
            cin >> sum;
            if (possibleSubset(mp, power, sum))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    vector<ll> ans;
    for (int i = 0; i < power.size(); i++)
    {
        ans[i] = (1 << power[i]);
    }

    possible(ans);
    for (auto i : ans)
        cout << i << " ";
    // printContainers(mp, power);
    // int *arr = new int[2 * m];
    // for (int i = 1; i <= 2 * m; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 1; i <= 2 * m; i += 2)
    // {
    //     if (arr[i] == 1)
    //     {
    //         power[arr[i + 1]]++;
    //         mp.insert(1LL << arr[i + 1]);
    //     }
    // }
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