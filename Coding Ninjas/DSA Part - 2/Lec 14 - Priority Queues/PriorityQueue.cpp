#include <iostream>
#include <bits/stdc++.h>
// #include "PriorityQueue.h"
using namespace std;

class PriorityQueue
{
    vector<int> pq;

public:
    bool isEmpty()
    {
        return pq.size() == 0;
    }
    void insert(int element)
    {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[parentIndex] > pq[childIndex])
            {
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[childIndex];
                pq[childIndex] = temp;
            }
            else
            {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin()
    {
        if (isEmpty())
        {
            return -1;
        }
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();

        // Down - Heapify
        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while (leftChildIndex < pq.size())
        {
            int minIndex = parentIndex;
            if (pq[minIndex] > pq[leftChildIndex])
            {
                minIndex = leftChildIndex;
            }
            if (rightChildIndex < pq.size() && pq[minIndex] > pq[rightChildIndex])
            {
                minIndex = rightChildIndex;
            }

            if (minIndex == parentIndex)
            {
                break;
            }
            int temp = pq[parentIndex];
            pq[parentIndex] = pq[minIndex];
            pq[minIndex] = temp;

            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }

        return ans;
    }

    void PrintVector()
    {

        for (int i = 0; i < pq.size(); i++)
        {
            cout << pq[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    PriorityQueue p;
    p.insert(1);
    p.insert(2);
    p.insert(3);
    p.insert(4);
    p.insert(5);
    p.insert(6);

    cout << p.removeMin() << endl;
    p.printVector();
    cout << p.removeMin() << endl;
    p.printVector();

    return 0;
}