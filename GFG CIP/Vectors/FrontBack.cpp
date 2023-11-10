#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void iter(vector<int>::iterator it1, vector<int>::iterator it2)
{
    while (it1 != it2)
    {
        cout << (*it1) << " ";
        it1++;
    }
}

int main()
{

    return 0;
}