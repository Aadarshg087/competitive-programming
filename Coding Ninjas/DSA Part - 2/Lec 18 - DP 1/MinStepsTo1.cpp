#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minSteps(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int count3, count2, count;
    if (n % 3 == 0)
    {
        count3 = minSteps(n / 3);
    }
    if (n % 2 == 0)
    {
        count2 = minSteps(n / 2);
    }
    count = minSteps(n - 1);

    
    // int min_count = min(count3, min(count2, count));

    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << minSteps(n) << endl;
    return 0;
}