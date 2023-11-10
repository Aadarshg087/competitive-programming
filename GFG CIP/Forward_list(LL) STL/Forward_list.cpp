#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int> l = {1, 5, 8, 9};
    forward_list<int> l1 = {2, 6, 7, 10};
    l.merge(l1);
    for (auto i : l)
        cout << i << " ";
    return 0;
}