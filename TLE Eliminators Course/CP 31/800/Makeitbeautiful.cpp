#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Macros
#define ll long long int
#define endl "\n"

bool beauti(vector<int> &arr, int n)
{
    int sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (sum == arr[i])
            return false;
        sum += arr[i];
    }
    return true;
}

void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool c = beauti(arr, n);

    int a = *min_element(arr.begin(), arr.end());
    int b = *max_element(arr.begin(), arr.end());
    if (a == b)
    {
        cout << "NO" << endl;
        return;
    }

    if (c)
    {
        cout << "YES" << endl;
        print(arr);
        return;
    }
    else
    {
        cout << "YES" << endl;
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        print(arr);
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