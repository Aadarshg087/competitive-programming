#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/

void merge(vector<int> &v, int l1, int h1, int l2, int h2)
{
    int i = l1;
    int j = l2;
    // cout << l1 << " " << h1 << " " << l2 << " " << h2 << endl;
    vector<int> ans;
    // cout << i << " " << j << endl;
    while (i != h1 + 1 && j != h2 + 1)
    {
        // cout << "cool" << endl;
        if (v[i] <= v[j])
        {
            ans.push_back(v[i++]);
        }
        else
        {
            ans.push_back(v[j++]);
        }
    }
    while (i != h1 + 1)
        ans.push_back(v[i++]);
    while (j != h2 + 1)
        ans.push_back(v[j++]);

    int o = 0;
    // if (ans.size() == h2 - l1 + 1)
    // cout << "YES" << endl;
    for (int k = l1; k <= h2; k++)
    {
        v[k] = ans[o++];
    }
}

void merge_Sort(vector<int> &v, int l, int h)
{
    // cout << l << " " << h << endl;
    if (l >= h)
        return;
    int mid = (l + h) / 2;
    merge_Sort(v, l, mid);
    merge_Sort(v, mid + 1, h);
    merge(v, l, mid, mid + 1, h);
}

int main()
{
    // vector<int> v{5, 4, 3, 2, 1};
    // // vector<int> v{1, 2, 3, 10, 11, 12};
    // int n = v.size();
    // int low = 0;
    // int high = n - 1;
    // merge_Sort(v, low, high);

    // // merge(v, 0, 2, 3, 5);

    // for (int i : v)
    //     cout
    //         << i << " ";
    // cout << endl;

    return 0;
}
