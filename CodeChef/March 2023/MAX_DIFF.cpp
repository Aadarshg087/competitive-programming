#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, S;
        cin >> N >> S;
        int max_diff = 0;
        for (int i = 0; i <= N; i++)
        {
            int second_num = abs(i - S);
            if (second_num > N)
            {
                continue;
            }
            else
            {
                int diff = abs(i - second_num);
                if (diff > max_diff)
                {
                    max_diff = diff;
                }
            }
        }

        cout << max_diff << endl;
    }
    return 0;
}