#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n > 1)
    {
        print(n - 1);
    }
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}