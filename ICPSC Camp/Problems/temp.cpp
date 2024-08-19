#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1, 0, 3, 3, 4, 1};
    // print the min elements of window size k using deque optmization

    deque<int> deq; // stores the indices
    int k = 3;
    for (int i = 0; i < k; i++)
    {
        while (!deq.empty() && v[deq.back()] >= v[i])
            deq.pop_back();
        deq.push_back(i);
    }
    cout << v[deq.front()] << " ";

    int n = v.size();
    for (int i = k; i < n; i++)
    {
        while (!deq.empty() && v[deq.back()] >= v[i])
            deq.pop_back();

        while (!deq.empty() && deq.front() <= i - k)
            deq.pop_front();
        deq.push_back(i);
        cout << v[deq.front()] << " ";
    }

    return 0;
}