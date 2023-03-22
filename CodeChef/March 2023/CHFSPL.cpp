#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        int var1;
        int var2;
        if (A > B)
        {
            if (A > C)
            {
                var1 = A;
                if (B > C)
                {
                    var2 = B;
                }
                else
                {
                    var2 = C;
                }
            }
            else
            {
                var1 = C;
                var2 = A;
            }
        }
        else
        {
            if (A > C)
            {
                var1 = B;
                var2 = A;
            }
            else
            {
                var1 = B;
                var2 = C;
            }
        }
        cout << var1 + var2 << endl;
    }

    return 0;
}