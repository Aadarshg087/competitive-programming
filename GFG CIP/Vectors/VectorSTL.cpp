#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n = 10;
    vector<int> arr(10);
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << arr.size() << endl;

    arr.resize(5);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr.capacity() << endl;

    arr.shrink_to_fit();
    cout << arr.capacity() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr.resize(11);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr.capacity() << endl;
    cout << arr.size() << endl;
}

int main()
{
    solve();

    return 0;
}