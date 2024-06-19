#include <bits/stdc++.h>
// #include <vector>
using namespace std;

void sum(int a, int b)
{
    int ans = a + b; //
    // return ans;
}

vector<int> changeVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = 99;
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return v;
}

int main()
{
    // int n = 10;
    // vector<int> v(10);
    // for (int i = 0; i < n; i++)
    //     cout << v[i] << " ";
    // cout << endl;
    // int size = 10;
    // int arr[size];
    // for (int i = 0; i < 10; i++)
    //     cout << arr[i] << " ";
    // arr[10] = 11;

    // vector<int> v(10, 90);
    // // cout << v.size() << endl;
    // v.push_back(99);
    // for (int i = 0; i <= 10; i++)
    //     cout << v[i] << " ";
    // cout << endl;
    // cout << v.size() << endl;

    // for (int index = 0; index <= 3; index++)
    //     cout << v[index] << " ";
    // cout << endl;

    int a = 10;
    int b = 20;
    int po = sum();
    cout << po << endl;

    // vector<int> v{1, 2, 3, 4};
    // vector<int> v1 = changeVector(v);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v1[i] << " ";
    // }
    // cout << endl;

    return 0;
}