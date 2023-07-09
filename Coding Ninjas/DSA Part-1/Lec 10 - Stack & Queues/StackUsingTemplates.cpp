#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Stack
{
    T *data;
    int nextIndex;
    int capacity;

public:
    Stack()
    {
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }

    void push(T element)
    {
        if (nextIndex == capacity)
        {
            T *newData = new T[2 * capacity];
            for (int i = 0; i < 2 * capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity = capacity * 2;
            data = newData;
            delete newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    bool isEmpty()
    {
        if (nextIndex == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    T top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty from the top" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }
};

int main()
{
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    cout << s1.top() << endl;
    cout << s1.isEmpty() << endl;

    return 0;
}