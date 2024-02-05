#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int numberOfWays(string corridor)
{
    int n = corridor.size();
    vector<int> position;
    for (int i = 0; i < n; i++)
    {
        if (corridor[i] == 'S')
            position.push_back(i);
    }

    if ((position.size() & 1) || position.size() == 0)
        return 0;

    int prevIndexVal = position[1];
    int res = 1;
    for (int i = 2; i < position.size(); i += 2)
    {
        res = (res * abs(position[i] - prevIndexVal)) % M;
        prevIndexVal = position[i + 1];
    }

    return res;
}

int NumberOfWays(string corridor)
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