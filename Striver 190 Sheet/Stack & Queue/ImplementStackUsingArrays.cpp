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

class MyStack
{
private:
    int arr[1000];
    int top;

public:
    MyStack()
    {
        top = -1;
    }
    void push(int);
    int pop();
};

// O(1)
void MyStack ::push(int x)
{
    arr[++top];
}

// O(1)
int MyStack::pop()
{
    if (top == -1)
        return -1;
    return arr[top--];
}

int main()
{

    return 0;
}