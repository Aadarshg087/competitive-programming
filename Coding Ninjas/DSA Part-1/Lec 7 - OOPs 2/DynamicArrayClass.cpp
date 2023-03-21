#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class DynamicArray
{
private:
    int *data;
    int nextIndex;
    int capacity;

public:
    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    DynamicArray(DynamicArray const &d)
    {
        // Deep Copy
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }

    void operator=(DynamicArray const &d)
    {
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }
    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newData = new int[capacity * 2];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    // print the element at the particular index
    int get(int i) const
    {
        if (i < nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }

    // Insert the element at a particular index
    void add(int i, int element)
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else if (i == nextIndex)
        {
            add(element);
        }
        else
        {
            return;
        }
    }

    void print() const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();

    // --> DynamicArray d2(d1);
    // this will call the inbuilt copy constructor and perform the shallow copy which is obviously we don't want

    // --> DynamicArray d3;
    // --> d3 = d1;
    // we are using copy assignment operator, this will also perform the shallow copy

    // In order to perform the deep copy, we need to create our own copy constructor

    DynamicArray d2(d1);
    d1.add(0, 100);
    d1.print();
    d2.print();

    DynamicArray d3;
    d3 = d1;
    d3.print();

    return 0;
}