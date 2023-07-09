#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class StackUsingArrays
{
    int *data;
    int nextIndex;
    int capacity;

public:
    StackUsingArrays(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    int size()
    {
        return nextIndex;
    }

    int top()
    {
        return data[--nextIndex];
    }

    void isEmpty()
    {
    }
    int pop()
    {
        nextIndex--;
        return data[nextIndex];
    }
    void push(int element)
    {
        if (capacity == nextIndex)
        {
            cout << "Stack is Full" << endl;
            return;
        }
        data[nextIndex++] = element;
    }
};

int main()
{

    return 0;
}