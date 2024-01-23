#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int M = 1e9 + 7;
int countHomogeneous(string s)
{
    int n = s.size();
    int res = 0;
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && s[i] == s[i - 1])
        {
            length += 1;
        }
        else
        {
            length = 1;
        }
        res = (res + length) % M;
    }
    return res;
}

int permute(long long count, vector<long long int> &v)
{
    long long int ans = 0;
    // to find all the substr of lenght occ (homogenous)
    long long temp = ((count) * (count + 1)) / 2;
    temp = temp % M;
    ans = (ans + temp) % M;
    return v[count] = ans;
}

int countHomogenous(string s)
{
    // return max homogenous string
    // we could create a map for the element and occurences as values
    // we could create a function which returns the number homo substr
    // possible we could keep a vector to store answers of certain
    // occurences so that we dont have to calculate again and again (similar
    // to memoization)
    int n = s.size();
    long long int res = 0;
    long long int count = 1;
    bool check = false;
    // For memoization
    vector<long long int> v(n + 1, -1);

    multimap<char, int> mp;
    for (long long int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            mp.insert({s[i], count});
            count = 1;
            // for last element
            if (i == n - 2)
            {
                check = true;
            }
        }
        else
        {
            count++;
            if (i == n - 2)
                check = false;
        }
    }

    if (check)
        mp.insert({s[n - 1], 1});
    else
        mp.insert({s[n - 1], count});

    for (auto &i : mp)
    {
        if (v[i.second] != -1)
        {
            res = (res + v[i.second]) % M;
        }
        else
        {
            long long int temp = permute(i.second, v);
            res = (res + temp) % M;
        }
    }

    // Debug
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return res;
}

int main()
{

    return 0;
}