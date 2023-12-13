#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> constructLowerArray(int *arr, int n)
{
    // code here
    int ans;
    vector<int> temp = {};

    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    {
        ans = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
        v.push_back(ans);
        temp.insert(temp.begin() + ans, arr[i]);
    }
    // cout << temp.end() - temp.begin() << endl;
    cout << ans << endl;
    reverse(v.begin(), v.end());
    return v;
}

int main()
{
    // int arr[] = {3, 2, 1};
    // vector<int> v = constructLowerArray(arr, 3);
    // for (auto i : v)
    //     cout << i << " ";
    // cout << endl;

    vector<int> v = {1, 2, 3, 4};
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    for (auto &i : v)
        cout << i << " ";

    int ans;

    return 0;
}