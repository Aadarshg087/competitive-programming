#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SwapMe(unordered_set<string> first, unordered_set<string> second)
{

    // Your code here
    // Use swap function
    swap(first, second);

    // For printing the set
    for (const string &x : first)
        cout << x << " ";
    cout << endl;
    for (const string &x : second)
        cout << x << " ";
    cout << endl;
}

int main()
{

    return 0;
}