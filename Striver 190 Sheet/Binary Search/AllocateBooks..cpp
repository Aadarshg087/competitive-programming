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

/*
// BASIC APPROACH
- We are just simply doing the linear search and finding the maximum answer

*/

int isPossible(vector<int> &A, int B, int pages)
{
    int sum = 0;
    int Student = 1;
    for (int i = 0; i < A.size(); i++)
    {
        if (sum + A[i] <= pages)
        {
            sum += A[i];
        }
        else
        {
            sum = A[i];
            Student++;
        }
    }
    if (Student < B)
        return false;
    return true;
}

int books(vector<int> &A, int B)
{
    int low = *max_element(A.begin(), A.end());
    int high = accumulate(A.begin(), A.end(), high);
    if (A.size() < B)
        return -1;

    for (int i = low; i <= high; i++)
    {
        if (isPossible(A, B, i))
            ;
        else
            return i + 1;
    }
    return -1;
}

// ------------------------------------------

/*
// BETTER APPROACH
- The core concept is students > B, that means the size of each bag/pages is relatively less.
- That's why, we need more students as it is getting filled quickly
- If the bag is too big, it adjust more books and eventually only one students is needed to accomodate all the books
- Therefore, we are finding as asked in the questions

T.C - O(log(sum - max + 1)) * O(n)
S.C -  O(1)
*/

int countStudents(vector<int> &A, int pages)
{
    int students = 1;
    int sum = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (sum + A[i] <= pages)
        {
            sum += A[i];
        }
        else
        {
            sum = A[i];
            students++;
        }
    }
    return students;
}

int books(vector<int> &A, int B)
{
    int low = *max_element(A.begin(), A.end());
    int high = accumulate(A.begin(), A.end(), high);
    int ans = -1;
    if (B > A.size())
        return -1;

    while (low <= high)
    {
        int mid = (high + low) >> 1;
        int students = countStudents(A, mid);
        if (students > B)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}

int main()
{

    return 0;
}