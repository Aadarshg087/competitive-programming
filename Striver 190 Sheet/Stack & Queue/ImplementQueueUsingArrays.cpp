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
class MyQueue
{
private:
    int arr[1000];
    int front;
    int rear;

public:
    MyQueue()
    {
        front = 0;
        rear = 0;
    }
    void push(int);
    int pop();
};

// O(1)
void MyQueue::push(int x)
{
    arr[rear++] = x;
}

// O(1)
int MyQueue::pop()
{
    if (front >= rear)
        return -1;

    return arr[front++];
}

int main()
{

    return 0;
}