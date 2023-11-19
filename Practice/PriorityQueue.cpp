#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {5, 6, 3, 2, 4, 2, 8};
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + 7); // O(n);

    // If we create the array using push, It will take O(n*logn) time where n is the number of elements and logn is the time complexity of push() function

    cout << pq.top() << endl;
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}