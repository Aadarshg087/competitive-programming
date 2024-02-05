#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int solve(string corridor, int i, int lastIndex)
{
    if (i == corridor.size() || i == lastIndex)
        return 0;

    int n = corridor.size();
    int ans = 0;
    int countS = 0;
    int countP = 0;
    while (true)
    {
        if (countS >= 2 && corridor[i] == 'S')
            break;
        if (corridor[i] == 'S')
        {
            countS++;
        }
        else if (corridor[i] == 'P')
        {
            countP++;
        }
    }
    int ans = (countP * 1LL * solve(corridor, i + 1, lastIndex)) % M;

    return ans;
}
int numberOfWays(string corridor)
{
    int temp = 0;
    int n = corridor.size();
    int lastindex = 0;
    for (int i = 0; i < n; i++)
    {
        if (corridor[i] == 'S')
        {
            lastindex = i;
            temp++;
        }
    }

    if (temp & 1 || temp == 0)
    {
        return 0;
    }

    if (temp == 2)
        return 1;

    return solve(corridor, 0, lastindex);
}

int numberOfWays(string corridor)
{
    int n = corridor.size();
    int s = 0;
    int e = n - 1;
    int temp = 0;
    set<int> st;
    for (char c : corridor)
    {
        if (c == 'S')
            temp++;
    }
    if ((temp & 1) || temp == 0)
        return 0;
    if (temp == 2)
    {
        return 1;
    }

    int count = 0;
    int divider = 0;
    for (int i = 0; i < n; i++)
    {
        if (corridor[i] == 'S')
        {
            count++;
        }
        if (count == 2)
        {
            if (s == 0)
                s = i;
            count = 0;
            divider++;
            st.insert(i);
        }
    }
    divider--;
    auto it = --st.end();
    st.erase(it);
    int countPlant = 0;
    int res = 0;
    for (int it : st)
    {
        countPlant = 0;
        for (int i = it + 1; corridor[i] != 'S'; i++)
        {
            countPlant++;
        }
        countPlant++;
        if (countPlant != 0 && res != 0)
            res = (res * 1LL * countPlant) % M;
        else
            res = countPlant;
    }

    return res;
}

int main()
{
    string s;
    cin >> s;
    cout << NumberOfWays(s) << endl;
    return 0;
}