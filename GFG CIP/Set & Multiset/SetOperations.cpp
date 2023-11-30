#include <iostream>
#include <bits/stdc++.h>
using namespace std;

set<int> setInsert(int arr[], int n)
{
    // Your code here to insert arr into s
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    return s;
}

void setDisplay(set<int> s)
{
    // Your code here to display elements of s
    for (auto i : s)
        cout << i << " ";
    cout << endl;
}

void setErase(set<int> &s, int x)
{
    // write if condition here
    if(s.find(x)!=s.end())
        cout << "erased " << x;
    else
        cout << "not found";
    // write else condition here

    cout << endl;
}

int main()
{

    return 0;
}