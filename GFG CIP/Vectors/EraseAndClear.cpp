#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void eraseAt(vector<int> &V, int pos)
{
    // your code here
    V.erase(V.begin() + pos);
}

void eraseInRange(vector<int> &V, int start, int end)
{
    // your code here
    V.erase(V.begin() + start, V.begin() + end);
}

void clearAll(vector<int> &V)
{
    // your code here
    V.clear();
}

int main()
{

    return 0;
}