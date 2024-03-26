#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
    - Check for overflow
    - Add brackets while using bitwise
    - Check corner cases (out of bounds for loops)
    - Revise the code
    - Try to prove yourself wrong
*/
struct Job
{
    int id;
    int dead;
    int profit;
};

vector<int> JobScheduling(Job arr[], int n)
{
    // vector<pair<float, int>> v(n);
    vector<int> v(n + 1, -1);
    int sum = 0;
    int count = 0;
    vector<pair<int, int>> j(n);
    for (int i = 0; i < n; i++)
    {
        j[i] = make_pair(arr[i].profit, arr[i].dead);
    }

    sort(j.begin(), j.end());

    for (int i = 0; i < n; i++)
    {
        int loc = j[i].second;
        while (v[loc] != -1)
            loc--;
        v[loc] = j[i].first;
        count++;
        sum += j[i].first;
        if (count == v.size())
            break;
    }

    v.clear();
    v[0] = count;
    v[1] = sum;
    return v;
}

int main()
{

    return 0;
}