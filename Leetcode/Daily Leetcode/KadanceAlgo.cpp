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

int main()
{
    vector<int> v{1, 3, -3, -2, 4, 5};
    int maxi = 0;
    int sum = 0;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        maxi = max(maxi, sum);
        if (sum <= 0)
            sum = 0;
    }

    cout << maxi << endl;
    return 0;
}