#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> constructLowerArray(int *arr, int n)
{
    // code here
    vector<int> temp;
    vector<int> v;
    for (int i = n - 1; i >= 0; i--)
    {
        int ans = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
        v.push_back(ans);
        temp.insert(temp.begin() + ans, arr[i]);
    }
    cout << temp.end() - temp.begin() << endl;
    reverse(v.begin(), v.end());
    return v;
}

int main()
{

    return 0;
}