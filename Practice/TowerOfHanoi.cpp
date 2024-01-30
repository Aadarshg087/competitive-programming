#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void TowerOfHanoi(int n, char src, char help, char dest, int &count)
{
    if (n == 0)
        return;
    count++;
    TowerOfHanoi(n - 1, src, dest, help, count);
    cout << "Moving " << n << "th disk from " << src << " to " << dest << endl;
    TowerOfHanoi(n - 1, help, src, dest, count);
}

int main()
{
    int n = 4;
    int ans = pow(2, n);
    // cout << ans - 1 << endl;
    int count = 0;
    TowerOfHanoi(n, 'A', 'B', 'C', count);
    cout << count << endl;
    return 0;
}