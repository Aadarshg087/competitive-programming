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

/*

4 2 10
3 4 2


*/

void solve()
{
    int n;
    cin >> n;

    vector<int> v1(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq1;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        pq1.push(make_pair(v1[i], i));
    }

    vector<int> v2(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq2;
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
        pq2.push(make_pair(v2[i], i));
    }
    
    int a = 0;
    int b = 0;
    bool c = 1;
    while (n--)
    {
        if (c) // Alice move
        {
            int temp1 = pq1.top().first;
            int temp2 = pq2.top().first;
            if (temp1 > temp2)
            {
                a += temp1;
            }
            else
            {
            }
        }
        else
        {
        }
    }

    if (a > b)
    {
        cout << "Alice" << endl;
    }
    else if (a < b)
    {
        cout << "Bob" << endl;
    }
    else
        cout << "Tie" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}