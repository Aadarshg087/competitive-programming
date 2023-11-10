#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseIterator(vector<int>::reverse_iterator it1, vector<int>::reverse_iterator it2)
{

    while (it2 != it1 - 1)
    {
        cout << (*it2) << " ";
        it2--;
    }

    cout << endl;
}

int main()
{

    return 0;
}