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
    vector<int> v{1, 2, 3, 4, 5, 6};
    int n = v.size();
    int i = 0;
    int j = 0;
    int ans = 0;
    int sum = 0;
    int k = 12;
    while (j < n)
    {
        sum += v[j];
        while (sum > k)
        {
            sum -= v[i];
            i++;
        }
        ans = max(ans, j - i + 1);
        cout << i << " " << j << endl;
        j++;
    }
    cout << ans << endl;

    return 0;
}