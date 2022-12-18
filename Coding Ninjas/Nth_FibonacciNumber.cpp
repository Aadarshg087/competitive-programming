#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, curr, prev, res;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << endl;
        exit(EXIT_SUCCESS);
    }
    int count = 3;
    prev = 1;
    curr = 1;
    while (count <= n)
    {
        res = prev + curr;
        prev = curr;
        curr = res;
        // cout << "curr: " << curr << endl;
        // cout << "Count: " << count << endl;
        count++;
    }
    cout << res << endl;
    return 0;
}