#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void passFunc(string &s)
{
    cout << s << endl;
}
void check(int *a, int *arr)
{
    cout << *a << endl;
}

int main()
{
    int a = 23;
    int arr[] = {0};
    check(&a, arr);

    // string s = "hello world";
    // passFunc(s);
    // vector<int> v1 = {20, 10, 30};
    // for (auto i : v1)
    //     cout << i << " ";
    // cout << endl;
    // vector<int> v2 = {3, 17, 80};
    // make_heap(v1.begin(), v2.end());
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     v1.push_back(v2[i]);
    // push_heap(v1.begin(), v1.end());
    // }
    // push_heap(v1.begin(), v1.end());
    // sort_heap(v1.begin(), v1.end());

    // for (auto i : v1)
    //     cout << i << " ";
    // cout << endl;
    // make_heap(v1.begin(), v1.end());
    // cout << v1.front() << endl;
    // for (auto i : v1)
    //     cout << i << " ";
    // cout << endl;
    // sort_heap(v1.begin(), v1.end());
    // for (auto i : v1)
    //     cout << i << " ";
    // cout << endl;

    // vector<int> v = {5, 4, 3, 2, 1};
    // bool p = next_permutation(v.begin(), v.end());
    // for (auto i : v)
    //     cout << i << " ";
    // cout << endl;
    // cout << p << endl;
    // p = next_permutation(v.begin(), v.end());
    // for (auto i : v)
    //     cout << i << " ";
    // cout << endl;
    // cout << p << endl;

    // string s = "Fool";
    // cout << "Printing the string normal: " << s << endl;
    // const char *str = s.c_str();
    // cout << s.length() << endl;
    // char p[] = {'a', 'b', 'c', '\0'};
    // for (auto i : p)
    //     cout << i << " ";
    // cout << endl;
    // cout << strlen(p) << endl;
    // cout << s.size() << endl;

    // int arr[] = {1, 2, 3, 4, 5, 6};
    // cout << sizeof(arr) << endl;
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n << endl;

    // string s = "Hello World";
    // string n = s.substr(1, 3);
    // cout << n << endl;

    // int k = s.find("W");
    // if (k == string::npos)
    // {
    //     cout << "not found" << endl;
    // }
    // else
    //     cout << "found at: " << k << endl;
    // cout << string::npos << endl;

    // string s1 = "abc";
    // string s2 = "acd";
    // if (s1 == s2)
    //     cout << "True" << endl;
    // else
    //     cout << "False" << endl;

    // if (s1 > s2)
    // {
    //     cout << ">" << endl;
    // }
    // if (s1 < s2)
    //     cout << "<" << endl;

    // string p;
    // getline(cin, p, '$');
    // cout << p << endl;

    return 0;
}