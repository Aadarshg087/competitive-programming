#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPathCrossing(string path)
{
    pair<int, int> p = {0, 0};
    string key = to_string(p.first) + "_" + to_string(p.second);
    unordered_set<string> st;
    st.insert(key);
    for (int i = 0; i < path.size(); i++)
    {
        if (path[i] == 'N')
        {
            p.second++;
        }
        else if (path[i] == 'E')
        {
            p.first++;
        }
        else if (path[i] == 'S')
        {
            p.second--;
        }
        else if (path[i] == 'W')
        {
            p.first--;
        }
        key = to_string(p.first) + "_" + to_string(p.second);
        if (st.find(key) != st.end())
        {
            return true;
        }
        else
            st.insert(key);
    }

    return false;
}

int main()
{

    return 0;
}