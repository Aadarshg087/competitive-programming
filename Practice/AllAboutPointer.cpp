#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a = 10;
    // int *p = &a;
    // cout << p << endl;
    // cout << &a << endl;
    // cout << *p << endl;

    // (*p)++;
    // a++;
    // cout << a << endl;
    // cout << *p << endl;

    // int **q = &p;
    // cout << p << endl;
    // cout << **q << endl;

    // Arrays and pointers
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int n = sizeof(arr) / sizeof(int);
    // cout << &arr[0] << endl;
    // cout << arr << endl;
    // cout << *arr << endl;
    // cout << *(arr + 3) << endl;
    // cout << arr[3] << endl;
    // cout << "--" << endl;
    // cout << 3 [arr] << endl;

    // int *o = arr;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << o[i] << " ";
    // }

    // --------- To find the length of char array ------------------
    // char b[] = "abcd";
    // cout << b;
    // int count = 0;
    // for (int i = 0; b[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // cout << count << endl;

    // -------------- To find the length of the string ---------------
    // string s = "Hello";
    // cout << s.length() << endl;
    // cout << s.size() << endl;

    // char c = 'p';
    // char *l = &c;
    // cout << c << endl;
    // cout << l << endl;

    // char s[] = "abcde";
    // cout << s << endl;
    // char *ps = "xyz";
    // cout << ps << endl;

    // int i = 65;
    // int *p = &i;
    // char *pc = (char *)p;

    // cout << p << endl;
    // cout << pc << endl;
    // cout << *p << endl;
    // cout << *pc << endl;

    // ------------- Reference Variable --------------------
    // int i = 10;
    // int &j = i;
    // cout << i << " " << j << endl;
    // i++;
    // cout << i << " " << j << endl;
    // int k = 100;
    // j = k;
    // cout << j;
    // k++;
    // cout << j << endl;
    // cout << i << endl;

    // int n;
    // cin >> n;
    // int *arr = new int[10];
    // int l;
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> l;
    //     arr[i] = l;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    int **p = new int *[5];
    p[0] = new int[3];
    p[1] = new int[3];
    p[2] = new int[3];
    p[3] = new int[3];
    p[4] = new int[3];
    

    return 0;
}