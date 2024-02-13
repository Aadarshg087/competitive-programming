#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

const int N = 1e6 + 7;
vector<bool> isPrime(N, true);
void seiveAlgo()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll> pre(n);
    pre[0] = v[0];
    int sum = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = sum + v[i];
        sum += v[i];
    }
    // cout << sum << endl;
    int res = sum / n;
    int temp1 = 0;
    int temp2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] - res > 0)
        {
            temp1 += v[i] - res;
        }
        else if (v[i] - res == 0)
            continue;
        else
        {
            int need = abs(v[i] - res);
            if (temp1 >= need)
                temp1 -= need;
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    // if (abs(temp1) == abs(temp2))
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
}

//     for (int i = 0; i < n; i++)
//     {
//         cout << pre[i] << " ";
//     }
// }

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // solve();
    // seiveAlgo();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}