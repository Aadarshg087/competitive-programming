#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class PriorityQueue
{
    vector<int> pq;

    PriorityQueue()
    {
    }

public:
    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int getSize()
    {
        if (isEmpty())
        {
            return 0;
        }
        return pq.size();
    }

    int getMin()
    {
        return pq[0];
    }

    void insert(int element)
    {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex])
            {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else
            {
                break;
            }

            childIndex = parentIndex;
        }
    }

    void removeMin()
    {
        int lastElementIndex = pq.size() - 1;
        int ansIndex = 0;
        int ans = pq[0];
        int temp = pq[ansIndex];
        pq[ansIndex] = pq[lastElementIndex];
        pq[lastElementIndex] = temp;
        pq.pop_back();

        int leftChildIndex = (2 * ansIndex) + 1;
        int rightChildIndex = (2 * ansIndex) + 2;
        int parentIndex = lastElementIndex;
        if (pq[parentIndex] > pq[leftChildIndex] || pq[parentIndex] > pq[rightChildIndex])
        {
            
        }
        int minElementIndex = min(pq[rightChildIndex], pq[leftChildIndex]);
    }
};
