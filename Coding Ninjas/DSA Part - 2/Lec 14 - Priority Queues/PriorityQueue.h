#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class PriorityQueue
{
    vector<int> pq;

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

    int removeMin()
    {

        int lastElementIndex = pq.size() - 1;
        int ans = pq[0];
        int temp = pq[0];
        pq[0] = pq[lastElementIndex];
        pq[lastElementIndex] = temp;
        pq.pop_back();
        int parentIndex = 0;

        while (parentIndex < pq.size() - 1)
        {
            int leftChildIndex = (2 * parentIndex) + 1;
            int rightChildIndex = (2 * parentIndex) + 2;
            if (pq[parentIndex] < pq[leftChildIndex] && pq[parentIndex] < pq[rightChildIndex])
            {
                break;
            }
            else if (rightChildIndex > pq.size() - 1 && pq[parentIndex] > pq[leftChildIndex])
            {
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[leftChildIndex];
                pq[leftChildIndex] = temp;
                parentIndex = leftChildIndex;
            }
            else
            {
                if (pq[leftChildIndex] < pq[rightChildIndex])
                {
                    int temp = pq[parentIndex];
                    pq[parentIndex] = pq[leftChildIndex];
                    pq[leftChildIndex] = temp;
                    parentIndex = leftChildIndex;
                }
                else if (pq[rightChildIndex] < pq[leftChildIndex])
                {
                    int temp = pq[parentIndex];
                    pq[parentIndex] = pq[rightChildIndex];
                    pq[rightChildIndex] = temp;
                    parentIndex = rightChildIndex;
                }
            }
        }
        return ans;
    }

    void printVector()
    {
        for (int i = 0; i < pq.size(); i++)
        {
            cout << pq[i] << " ";
        }
        cout << endl;
    }
};
