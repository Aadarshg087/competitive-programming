#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> beautifulIndices(string s, string a, string b, int k)
{
    vector<int> v;
    string news = s;
    bool check = false;
    while (true)
    {
        // cout << "fsdf is called" << endl;
        if (s.find(a) == string::npos)
        {
            break;
        }
        if (s.find(b) == string::npos || check == true)
        {
            string st = s;
        }
        int index1 = s.find(a);
        int index2 = s.find(b);
        int ans = abs(index1 - index2);
        // cout << index1 << " " << index2 << endl;
        if (ans <= k)
            v.push_back(index1);
        else
        {
            check = true;
        }
        int temp = index1 + a.size();
        int temp2 = index2 + b.size();
        s[index1] = '-';
        // s[index2] = '-';
        // news = news.substr(0, index1) + news.substr(temp);
        // cout << news << endl;
        // news = news.substr(0, index2) + news.substr(temp2);
        // cout << news << endl;
    }
    sort(v.begin(), v.end());
    return v;
}

int main()
{
    string s = "ocmm";
    // cout << s << endl;
    string a = "m";
    string b = "oc";
    int k = 3;
    vector<int> v = beautifulIndices(s, a, b, k);
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}