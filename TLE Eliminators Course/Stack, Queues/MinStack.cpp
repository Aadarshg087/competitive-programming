#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
    stack<int> st;
    multiset<int> set;
    MinStack() {}

    void push(int val)
    {
        set.insert(val);
        st.push(val);
    }
    void pop()
    {
        auto it = set.find(st.top());
        set.erase(it);
        st.pop();
    }

    int top() { return st.top(); }
    int getMin() { return *set.begin(); }
};

int main()
{
    set<int> pq;
    pq.insert(23);
    pq.insert(54);
    pq.insert(76);
    pq.insert(11);
    pq.insert(11);
    pq.insert(11);

    pq.remove(11);
    for (auto i : pq)
        cout << i << endl;

    return 0;
}