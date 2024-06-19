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

class Heap
{
public:
    vector<int> v;
    int size;
    Heap()
    {
        v.push_back(-1);
        size = 0;
    }

    void insertion(int val)
    {
        v.push_back(val);
        int i = v.size() - 1;
        while (i > 1)
        {
            int parent = i / 2;
            if (v[parent] < v[i])
            {
                swap(v[parent], v[i]);
                i = parent;
            }
            else
                return;
        }
    }

    void deletion2()
    {
        if (v.size() == 1)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        v[1] = v.back();
        v.pop_back();

        int i = 1;
        while (i < v.size())
        {
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            if (leftChild < v.size() && v[leftChild] > v[i])
            {
                swap(v[leftChild], v[i]);
                i = leftChild;
            }
            else if (rightChild < v.size() && v[rightChild] > v[i])
            {
                swap(v[rightChild], v[i]);
                i = rightChild;
            }
            else
                return;
        }
    }

    void deletion()
    {
        if (v.size() == 1)
        {
            cout << "Nothing to delete" << endl;
            return;
        }
        v[1] = v.back();
        v.pop_back();

        int i = 1;
        while (i < v.size())
        {
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            int larger = -1;
            if (leftChild < v.size() && rightChild < v.size())
                larger = (v[leftChild] > v[rightChild]) ? leftChild : rightChild;
            if (larger != -1)
            {
                swap(v[larger], v[i]);
                i = larger;
            }
            else if (leftChild < v.size() && v[leftChild] > v[i])
            {
                swap(v[leftChild], v[i]);
                i = leftChild;
            }
            else
                return;
        }
    }
    void printHeap()
    {
        for (int i = 1; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
};

int main()
{
    Heap h;
    vector<int> input{12, 15, 13, 2, 1, 4};
    for (int i : input)
    {
        h.insertion(i);
    }

    h.printHeap();
    h.deletion2();
    h.printHeap();

    return 0;
}