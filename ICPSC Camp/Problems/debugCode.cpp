#include <bits/stdc++.h>
using namespace std;

#define ll long long int

string solve_correct(ll n, ll arr[])
{
    bool flag = true;
    ll result = arr[0];
    for (ll i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);
    }

    if (result <= 1)
    {
        return "No";
    }

    return "Yes";
}

string solve_incorrect(ll n, ll arr[])
{
    ll minVal = 1e9 + 1;
    for (int i = 0; i < n; i++)
    {
        minVal = min(minVal, arr[i]);
    }
    if (minVal % 2 == 0)
    {
        // All the numbers mist be divisible by 2
        minVal = 2;
    }
    else
    {
        // Odd number, so equal split is not possible
        // Check if minVal can be minimized
    }
    bool flag = true;
    ll result = minVal;
    for (ll i = 0; i < n; i++)
    {
        result = __gcd(arr[i], result);
    }
    if (result <= 1)
    {
        return "No";
    }
    return "Yes";
}

int get_random_num(int a, int b)
{ // [a,b]
    return a + rand() % (b - a + 1);
}

string get_random_string(int n)
{
    string charset = "abcde";
    string rand_str = "";
    for (int i = 0; i < n; i++)
    {
        rand_str += charset[get_random_num(0, 4)];
    }
    return rand_str;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }

    while (1)
    {
        // cout<<get_random_string(10)<<endl;

        ll n = 3;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = rand() % 10;
        }
        if (solve_correct(n, arr) != solve_incorrect(n, arr))
        {
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            break;
        }
    }

    // cout<<<<endl;
    // cout<<<<endl;

    return 0;
}
