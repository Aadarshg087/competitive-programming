#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float u, v, a, s;
        cin >> u >> v >> a >> s;
        if (u <= v)
        {
            cout << "Yes" << endl;
            continue;
        }
        float res = (u * u) - (2 * a * s);
        if (res <= 0)
        {
            cout << "Yes" << endl;
            continue;   
        }
        res = sqrt(res);
        if (res <= v)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}