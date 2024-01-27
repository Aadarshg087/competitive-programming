#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  N nodes - print no of BST can be formed
//
int solve(int n)
{

}


// Catalan series - (2^n)Cn/n + 1;
int solve(int n, int s, int e)
{
    if (abs(s - e) == 0)
        return 0;
    if (n == 0)
    {
        return 1;
    }
    int res = 0;
    for (int i = s; i <= e; i++)
    {
        int ans1 = solve(n - 1, 1, i - 1);
        int ans2 = solve(n - 1, i + 1, n);
        res += ans1 + ans2;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n, 1, n) << endl;

    return 0;
}