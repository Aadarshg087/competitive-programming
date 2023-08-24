#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
    // By default, the priority queue is a max queue.
    priority_queue<int> pq;

    pq.push(10);
    pq.push(11);
    pq.push(78);
    pq.push(89);
    pq.push(91);
    pq.push(77);
    pq.push(31);

    cout << pq.size() << endl;

    cout << pq.empty() << endl;

    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;

    cout << "Emptying the array with the while loop: " << endl;
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}