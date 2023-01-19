#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkMember(int n)
{
    int prev = 0;
    int curr = 1;
    int ans = 0;
    while (ans <= n)
    {
        if (ans == n)
        {
            return true;
        }
        ans = prev + curr;
        prev = curr;
        curr = ans;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    cout << checkMember(n) << endl;
    return 0;
}